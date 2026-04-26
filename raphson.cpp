#include <bits/stdc++.h>
using namespace std;
// Function f(x) = x^4 − x − 10
double f(double x)
{
    return pow(x, 4) - x - 10;
}
// Derivative f'(x) = 4x^3 − 1
double df(double x)
{
    return 4 * pow(x, 3) - 1;
}
// Newton–Raphson Method
double newtonRaphson(double x0, double tol = 1.0e-6, int max_iter = 100)
{
    double x1;
    int iter = 1;
    printf("\nIter\t x\t\t f(x)\n");
    for (int i = 0; i < max_iter; i++)
    {
        if (df(x0) == 0)
        {
            printf("Derivative zero. Method fails.\n");
            return x0;
        }
        x1 = x0 - f(x0) / df(x0);
        printf("%d\t %.6f\t %.6f\n", iter, x1, f(x1));
        if (fabs(x1 - x0) < tol)
            return x1;
        x0 = x1;
        iter++;
    }
return x1;
}
int main()
{
    double x0;
    printf("Enter initial guess: ");
    scanf("%lf", &x0);
    double root = newtonRaphson(x0);
    printf("\nRoot = %.6f\n", root);
    return 0;
}
