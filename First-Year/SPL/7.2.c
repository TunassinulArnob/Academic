/*Problem 7.2: Write a program to compute the sum of the digits of a given integer
number.
*/
#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    printf("\nThe sum of the digit of the number is: %d\n",sum);
    return 0;
}