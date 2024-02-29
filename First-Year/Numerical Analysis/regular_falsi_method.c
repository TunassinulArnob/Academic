#include<stdio.h>
#include<math.h>
#include<conio.h>
#define f(x) x*x*x-4*x-1
#define e 0.001
// Regular falsi
int main(){
    float a,b,fa,fb,c,fc;
    int i=1;
    printf("Enter a and b: ");
    scanf("%f%f",&a,&b);
    do{
        fa=f(a);
        fb=f(b);
        c=(a*fb - b*fa)/(fb-fa);
        fc=f(c);
        if(fa*fc<0){
            b=c;
        }else{
            a=c;
        }
        i++;
        printf("Number of iteration: %d\t",i);
        printf("Root is %f\t",c);
        printf("Value of function is %f\n",fc);

    }while(fabs(fc)>e);
    return 0;
}