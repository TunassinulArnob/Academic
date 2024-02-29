// Fixed point iteration
#include<stdio.h>   //1  Start
#include<math.h>
#define f(x) 3*x-cos(x)-1  //2  Define f(x)
#define g(x) (1+cos(x))/3   // 3 define g(x)
#define e 0.001     // 4 define tolerance
int main(){
    float a,b,fb,fa; 
    printf("Enter initial guess: ");
    scanf("%f",&a);   // 4 Chosing initial guess
    int i=1;   // iteration count =1;
    printf("Step\tx1\n");
    do{      // loop start
        b=g(a);  // x1=g(x0)
        fb=f(b);
        fa=f(a);
        printf("%d\t%f\t%f\t%f\t%f\n",i,a,fa,b,fb);
        i++;            // iteration count ++
        a=b;            // set x0 = x1

    }while(fabs(fb)>e);// checking tolerance  if(f(x1)>e) then repeat loop
    printf("\nRoot is %f\n",b);
    return 0; // stop 
}

