#include <bits/stdc++.h>
using namespace std;

// Function to calculate u(u-1)(u-2)... / factorial
double s_cal(double s, int n)
{
    double res = 1;
    for (int i = 0; i < n; i++)
        res *= (s - i);
    return res;
}

// Function to calculate factorial
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

// Newton Forward Interpolation
double newtonForward(vector<double> &x, vector<vector<double>> &y, int n, double value)
{
    double h = x[1] - x[0];
    double s = (value - x[0]) / h;

    double sum = y[0][0];

    for (int i = 1; i < n; i++)
    {
        sum += (s_cal(s, i) * y[0][i]) / fact(i);
    }

    return sum;
}

int main()
{
    int n;
    printf("Enter number of data points: ");
    scanf("%d", &n);

    vector<double> x(n);
    vector<vector<double>> y(n, vector<double>(n));

    printf("Enter values of x:\n");
    for (int i = 0; i < n; i++)
        scanf("%lf", &x[i]);

    printf("Enter values of y:\n");
    for (int i = 0; i < n; i++)
        scanf("%lf", &y[i][0]);

    // Construct forward difference table
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }

    double value;
    printf("Enter value to interpolate: ");
    scanf("%lf", &value);

    double result = newtonForward(x, y, n, value);

    printf("Interpolated value = %lf\n", result);

    return 0;
}