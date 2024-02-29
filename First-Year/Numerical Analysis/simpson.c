#include<stdio.h>
#include<math.h>
#define f(x) 1/x
// Simson method
int main(){
    float a,b,n,x,k;
    printf("Enter Upper and Lower limit and interval: ");
    scanf("%f%f%f",&a,&b,&n);
    float h,sum=0;
    h= (b-a)/n;
    for(int i=1; i<n; i++){
        x=a+h*i;
        if(i%2==0){
            sum=sum+2*f(x);
        }else{
            sum=sum+4*f(x);
        }
    }
    sum=sum+f(a)+f(b);
    sum=sum*h/3;
    printf("Answer is %f\n",sum);
}