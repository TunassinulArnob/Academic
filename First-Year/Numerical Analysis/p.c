#include<stdio.h>
#include<math.h>
#define f(x) 1.0/x 
#define e 0.0001

int main(){
    float a,b,h,k,n,y,sum=0.0;
    printf("Enter a,b : ");
    scanf("%f%f",&a,&b);
    printf("Enter interval: ");
    scanf("%f",&n);
    h=(b-a)/n;
    for(int i=1 ; i<n ; i++){
        k=a+h*i;
        if(i%2==0)
            sum=sum+2*f(k);
        else
            sum=sum+4*f(k);
        
    }
    sum=sum+f(a)+f(b);
    sum=sum*h/3;
    printf("Vslue is %f\n",sum);
    
}