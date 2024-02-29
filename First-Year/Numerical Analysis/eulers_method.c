#include<stdio.h>
#include<math.h>
#define f(x,y) -x*y
// Eulers method
int main(){
    float x0,y0,h,xn,x,y;
    printf("Enter x0,y0,h and xn: ");
    scanf("%f%f%f%f",&x0,&y0,&h,&xn);
    x=x0;
    y=y0;
    int n;
    // n=(xn-x0)/h +1;
    while(x<xn){
        y=y+(h*(f(x,y)));
        x=x+h;
        printf("X= %f\tY=%f\n",x,y);
    }
    printf("\nApproximate Coordinate is : (%f.%f)\n",x,y);
    return 0;

}
