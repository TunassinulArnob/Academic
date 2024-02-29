// Gauss jacobi

#include<stdio.h>  //.........start
#include<math.h>
#define f1(x,y,z) (3+5*y+2*z)/10
#define f2(x,y,z) (3+4*x+3*z)/10
#define f3(x,y,z) (-3-x-6*y)/10
int main(){
    float x0=0,y0=0,z0=0,x1,y1,z1,e1,e2,e3,e;
    int count=1;
    printf("Enter tolerable error: ");
    scanf("%f",&e);
    printf("\nCount\tx\ty\tz\n");
    do{
        x1=f1(x0,y0,z0);
        y1=f2(x0,y0,z0);
        z1=f3(x0,y0,z0);
        printf("%d\t%.3f\t%.3f\t%.3f\n",count,x1,y1,z1);
        e1=fabs(x0-x1);
        e2=fabs(y0-y1);
        e3=fabs(z0-z1);
        count++;
        x0=x1;
        y0=y1;
        z0=z1;
    }while(e1>e && e2>e && e3>e);
    printf("\nSolution  x= %.3f\tY= %.3f\tZ=%.3f\n",x1,y1,z1);
    return 0;
}