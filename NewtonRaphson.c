#include<stdio.h>
#include<math.h>

double newton(double x)
{
    return x*x*x*x - x - 10;
}

double newton2(double x)
{
    return 4*x*x*x - 1;
}

int main()
{
    double a,c;
    int i;

    printf("enter initial guess a: ");
    scanf("%lf",&a);

    for(i=1;i<=5;i++)
    {
        if(newton2(a) == 0)
        {
            printf("division error");
            return 0;
        }

        c = a - newton(a)/newton2(a);

        if(fabs(c-a) < 0.0001)
        {
            printf("root found\n");
            break;
        }
        else
        {
            a = c;
        }
    }

    printf("root = %.6lf",c);
    return 0;
}// update
