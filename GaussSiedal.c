#include<stdio.h>
#include<math.h>
// 10x-y+2z=6
// 2x-y+10z-w=-11
// 3y-z+8w=15

int main()
{ double x=0,y=0,z=0,w=0;
int i;
   double x1,y1,z1,w1;
   for(i=1;i<=5;i++){
      x1=(6+y-2*z)/10 ;
      y1=(25+x1+z-3*w)/11;
      z1=(y1-11+w-2*x1)/10;
      w1=(15+z1-3*y1)/8;
      if(fabs(x1-x)<0.0001 && fabs(y1-y)<0.0001 && fabs(z1-z)<0.0001 && fabs(w1-w)<0.0001){
       printf (" roots are found same as initial");
       break; }
     else{
        x=x1;
        y=y1;
        z=z1;
        w=w1;
        }
      
}
printf ("value of x= %.6lf\n",x);
printf ("value of y= %.6lf\n",y);
printf ("value of z= %.6lf\n",z);
printf("value of w= %.6lf\n",w);
    return 0;
}// update
