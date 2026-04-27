#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double bisec(double x)
{
    return x*x*x - x - 11;
}

int main()
{
    double a, b, c;
    int i;

    printf("enter a value : ");
    scanf("%lf",&a);

    printf("enter value b: ");
    scanf("%lf",&b);

    if(bisec(a)*bisec(b) >= 0)
    {
        printf("invalid interval");
        return 0;
    }

    for(i=1;i<=10;i++)
    {
        c = (a+b)/2;

        if(fabs(bisec(c)) < 0.0001)
        {
            printf("root found\n");
            break;
        }
        else if(bisec(a)*bisec(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }

    printf("Root = %.6lf", c);
    return 0;
}// update
