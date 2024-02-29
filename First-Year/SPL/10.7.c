/*Problem 10.7: Write a function prime that returns 1 if its argument is a prime
number and return zero otherwise.*/
#include<stdio.h>

int prime(int a);

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    int n=prime(a);
    
    if(n==1)
        printf("%d is a Prime Numner.\n",a);
    else
        printf("%d is not a prime number.\n",a);
    return 0;
}

int prime(int a){
    for(int i=2; i<a; i++){
        if(a%i==0)
        return 0;
    }
    return 1;
}