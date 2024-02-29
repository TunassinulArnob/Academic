/*
Problem 10.5: The Fibonacci numbers are defined by recursively as follows:
𝐹1 = 1
𝐹2 = 1
𝐹𝑛 = 𝐹𝑛−1 + 𝐹𝑛−2 , 𝑛 > 2
Write a function that will generate and print the first n Fibonacci numbers. Test
the function for n = 5, 10 and 15.
*/

#include<stdio.h>

void fib(int n){
    int f[n];
    f[0]=1;
    f[1]=1;
    for(int i=2; i<n;i++){
        f[i]=f[i-1]+f[i-2];
        printf("%3d ",f[i]);
    }
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    fib(n);
    return 0;
}
