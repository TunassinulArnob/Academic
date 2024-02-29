/*Problem 7.3: The numbers in the sequences
1 1 2 3 5 8 13 21 ……….
are called Fibonacci numbers. Write a program using a do….while loop to
calculate and print the first m Fibonacci numbers.*/

#include<stdio.h>
void fib(int m){
    int fib=1,a=0,b=1;
     do{ 
        printf("%d ",fib);
        fib=a+b;
        a=b;
        b=fib;
        m--;
    }while(m>0);
}
int main(){
    int m;
    printf("Enter m, number of fibonacci number you want: ");
    scanf("%d",&m);
    
    printf("First %d fibonacci series is: ",m);
     // as it is exit controll loop we reduced the value of m by one
    fib(m);

    return 0;
}