#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-4*x-1
#define e 0.001
// Secant method
int main(){
    float x0,x1,x2;
    float f0,f1,f2;
    printf("Enter x0, x1 : ");
    scanf("%f%f",&x0,&x1);
    int i=1;
    do{
        f0=f(x0);
        f1=f(x1);
        x2= x1-(x1-x0)*f1/(f1-f0);
        f2=f(x2);
        printf("Number of iteration is %d\t",i);
        printf("Root is %f\t",x2);
        printf("Value of function is %f\n",f2);
        x0=x1;
        x1=x2;
        i++;
    }while(fabs(f2)>e);
    printf("Root is %f\n",x2);
    return 0;
}