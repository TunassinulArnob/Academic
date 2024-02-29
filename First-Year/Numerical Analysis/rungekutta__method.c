#include<stdio.h>
#include<math.h>
#define f(x,y) -x*y
// Runge kutta 
int main(){
    float x0,y0,k1,k2,k3,k4,k,h,y,xn,n;
    printf("Enter x0 and y0: ");
    scanf("%f%f",&x0,&y0);
    printf("Enter Xn: ");
    scanf("%f",&xn);
    printf("Enter step size: ");
    scanf("%f",&n);
    h=(xn-x0)/n;
    
    k1= h* f(x0,y0);
    k2= h*f((x0+(h*0.5)),(y+(k1*0.5)));
    k3= h*f((x0+(h*0.5)),(y+(k2*0.5)));
    k4= h*f((x0+h),(y0+k3));
    k= (k1+(2*k2)+(2*k3)+k4)/6;
    y= y0+k;
    printf("Value of Function is %f\n",y);
    return 0;
}
