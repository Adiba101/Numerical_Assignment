#include <bits/stdc++.h>
using namespace std;
void gaussElimination(vector<vector<double>> &a, int n)
{
    // Forward Elimination
    for (int i = 0; i < n; i++)
    {
        // Make diagonal element 1
        for (int k = i + 1; k < n; k++)
        {
            double factor = a[k][i] / a[i][i];
            for (int j = i; j <= n; j++)
            {
                a[k][j] = a[k][j] - factor * a[i][j];
            }
        }
    }
    // Back Substitution
    vector<double> x(n);

    for (int i = n - 1; i >= 0; i--)
    {
        x[i] = a[i][n];
        for (int j = i + 1; j < n; j++)
        {
            x[i] -= a[i][j] * x[j];
        }
        x[i] = x[i] / a[i][i];
    }
    printf("\nSolution:\n");
    for (int i = 0; i < n; i++)
    {
        printf("x%d = %lf\n", i + 1, x[i]);
    }
}

int main()
{
    int n;
    printf("Enter number of variables: ");
    scanf("%d", &n);

    vector<vector<double>> a(n, vector<double>(n + 1));

    printf("Enter augmented matrix coefficients:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    gaussElimination(a, n);

    return 0;
}