#include <bits/stdc++.h>
using namespace std;
void gaussSeidel(vector<vector<double>> &a, int n, double tol = 1.0e-6, int max_iter = 100)
{
    vector<double> x(n, 0.0); // initial guess

    for (int iter = 0; iter < max_iter; iter++)
    {
        vector<double> x_old = x;

        for (int i = 0; i < n; i++)
        {
            double sum = a[i][n];
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                    sum -= a[i][j] * x[j];
            }
            x[i] = sum / a[i][i]; // immediate update 
        }
        // Check convergence
        int converged = 1;
        for (int i = 0; i < n; i++)
        {
            if (fabs(x[i] - x_old[i]) > tol)
            {
                converged = 0;
                break;
            }
        }

        if (converged)
        {
            printf("Converged in %d iterations\n", iter + 1);
            break;
        }
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

    gaussSeidel(a, n);

    return 0;
}