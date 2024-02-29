// Newton Raphson
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) 3*x-cos(x)-1
#define df(x) 3+sin(x)
int main(){
    float a,b,fa,fb,dfa;
    printf("Enter value of a: ");
    scanf("%f",&a);
    int i=0;
    do{
        fa=f(a);
        dfa=df(a);
        b=a-(fa/dfa);
        fb=f(b);
        a=b;
        i++;
        printf("Number of iteration is %d\n",i);
        printf("Root is %f\n",b);
        printf("Value of Function is %f\n",fb);
    } while(fabs(fb)>e);
      

}