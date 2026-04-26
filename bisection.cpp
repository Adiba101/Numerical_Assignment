#include<bits/stdc++.h>
using namespace std;
// Defining Function for equation f(x) = x³ − x − 11
float equation (float  x)
{
    return (pow(x, 3) - x - 11);   
}
//condition check 
int  bisectcond(float a, float b)
{
    if (equation(a) * equation(b) < 0)
        return 1;
    else
        return 0;
}
//Bisection alogorith working
float bisection(float a, float b)
{
    float mid;
    //int iter=1;
    while (fabs(b - a)  >= 0.001) 
    {
        int iter=1;
        for (int i=1;i<11;i++)
        {
            mid = (a + b) / 2; // Midpoint
            printf("iteration %d : mid = %f \n",iter , mid);
            if (equation(a) * equation(b) < 0){
                b=mid;
            }
            else { a=mid;}
            iter++;
        }
        printf (" Root = %f " , mid);
    }
    return mid;
}
int main()
{
    float a,b;
    printf ("Enter the value of a and b : ");
    scanf ("%f %f" , &a , &b);
    if (bisectcond(a,b)){
       bisection(a,b);
    }
    else{
        printf ("Bisection method not applicable for the given values of a and b");
    }
    return 0;
}

