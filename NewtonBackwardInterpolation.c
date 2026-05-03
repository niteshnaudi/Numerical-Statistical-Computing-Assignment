#include<stdio.h>
#include<math.h>

int main()
{
    int xarr[10] = {0,1,2,3,4,5};
    int yarr[10] = {3,6,9,12,15,18};

    int n = 6;
    int i;

    double x = 0.5;
    double h, p, fx;

    double d1[10], d2[10], d3[10], d4[10], d5[10];

    h = xarr[1] - xarr[0];

    for(i=1;i<n;i++){
        if(xarr[i] - xarr[i-1] != h){
            printf("x values are not equally spaced\n");
            return 0;
        }
    }

    for(i=0;i<n-1;i++){
        d1[i] = yarr[i+1] - yarr[i];
    }

    for(i=0;i<n-2;i++){
        d2[i] = d1[i+1] - d1[i];
    }

    for(i=0;i<n-3;i++){
        d3[i] = d2[i+1] - d2[i];
    }

    for(i=0;i<n-4;i++){
        d4[i] = d3[i+1] - d3[i];
    }

    for(i=0;i<n-5;i++){
        d5[i] = d4[i+1] - d4[i];
    }

    p = (x - xarr[n-1]) / h;

    fx = yarr[n-1]
        + p * d1[n-2]
        + (p*(p+1)/2) * d2[n-3]
        + (p*(p+1)*(p+2)/6) * d3[n-4]
        + (p*(p+1)*(p+2)*(p+3)/24) * d4[n-5];

    printf("Value at x = %.2f is %.4f\n", x, fx);

    return 0;
}