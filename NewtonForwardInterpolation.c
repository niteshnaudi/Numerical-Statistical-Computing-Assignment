#include<stdio.h>
#include<math.h>

/*double f(double x,int ){
  return y+p*dy+(p*(p-1)*d2y)2+(p*(p-1)*(p-2)*d3y)/6 + (p*(p-1)*(p-2)*(p-3)*d4y)/24 ;
  } */
 
 int h(int xarr[10]){
 int i , h;
     h=xarr[1]-xarr[0];
  for(i=5;i>0;i--){
      if(xarr[i]-xarr[i-1]!=h){
      printf("different value of H");
       return -1 ;
       }
       
  }
  return h;
  
   }
int main()
{ int xarr[10]={0,1,2,3,4,5};
  int yarr[10]={3,6,9,12,15,18};
  int  i , height, flag =0;
  double p, x=0.5,fx;
  
  int d0y[10], d1y[10] ,d2y[10] , d3y[10], d4y[10], d5y[10];
  
  height=h(xarr);
  printf("value of h=%d\n",height);
  p=(x-xarr[0])/height;
  printf("value of p= %.6lf\n",p);
  
  for(i=0;i<5;i++){
    
    d0y[i]=yarr[i+1]-yarr[i];
    }
  for(i=0;i<=4;i++){
       d1y[i]=d0y[i+1]-d0y[i];
       }
   for(i=0;i<=3;i++){
       d2y[i]=d1y[i+1]-d1y[i];
       }
    for(i=0;i<=2;i++){
       d3y[i]=d2y[i+1]-d2y[i];
       }
     for(i=0;i<=1;i++){
       d4y[i]=d3y[i+1]-d3y[i];
       }            
  printf("value of d0y= ");
  for(i=0;i< 5;i++){
  printf("%d",d0y[i]);
  }  
    printf("\nvalue of d1y= ");
  for(i=0;i< 4;i++){
  printf("%d",d1y[i]);
  }  
    printf("\nvalue of d2y= ");
  for(i=0;i<3;i++){
  printf("%d",d2y[i]);
  }  
    printf("\nvalue of d3y= ");
  for(i=0;i< 2;i++){
  printf("%d",d3y[i]);
  }  
    printf("\nvalue of d4y= ");
  for(i=0;i< 1;i++){
  printf("%d",d4y[i]);
  }  
  fx=yarr[0]+p*d0y[0]+(p*(p-1)*d1y[0])/2+(p*(p-1)*(p-2)*d2y[0])/6 + (p*(p-1)*(p-2)*(p-3)*d3y[0])/24;
  printf(" \nvalue of y at x(0.5)= %.6lf",fx);
    return 0;
}