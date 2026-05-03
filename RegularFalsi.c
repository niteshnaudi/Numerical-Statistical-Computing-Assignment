#include<stdio.h>
#include<math.h>

double falsi(double x)
{
    return x*x*x + 3*x*x - 1;
}

int main()
{
    double a,b,c;
    int i;

    printf("enter value a: ");
    scanf("%lf",&a);

    printf("enter value b: ");
    scanf("%lf",&b);

    if(falsi(a)*falsi(b) >= 0)
    {
        printf("invalid interval");
        return 0;
    }

    for(i=1;i<=10;i++)
    {
        c = a - ( (b-a) / (falsi(b)-falsi(a)) ) * falsi(a);

        if(fabs(falsi(c)) < 0.0001)
        {
            printf("root found\n");
            break;
        }
        else if(falsi(a)*falsi(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }

    printf("root = %lf",c);
    return 0;
}