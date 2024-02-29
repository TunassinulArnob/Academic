// C Code for Bisectional Method
#include<stdio.h>
#include<math.h>
#include<conio.h>
#define e 0.001   // [minimum presizing value]
#define f(x) x*x*x-4*x-1

void main(){
    float a,b,c;
    float f0,f1,f2;
    int i=0;
    printf("Enter the value of a and b: ");
    scanf("%f %f",&a,&b);
    do{
        f0=f(a);
        f1=f(b);
        c=(a+b)/2;
        f2=f(c);
        if(f0*f2<0){
            b=c;
        } else{
            a=c;
        }
        i++;
        printf("NO. of iteration = %d\t",i);
        printf("Root = %f\t\t",c);
        printf("Value of Function = %f\n",f2);
    } while (fabs(f2)>e);  
}