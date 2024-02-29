#include<stdio.h>
#include<math.h>
#define f(x) 1.0/x 
// Trapezoidal 
int main(){
    float a,b;
    float n;
    printf("Enter a, b and n: ");
    scanf("%f%f%f",&a,&b,&n);
    float h=(b-a)/n;
    float sum=0.0;
    float x;
    for(int i=1 ; i<n; i++){
        x=a+h*i;
        sum+=2*f(x);
    }
    sum=sum+f(a)+f(b);
    float ans=sum*h/2;
    printf("Answer is %f\n",ans);
    
}