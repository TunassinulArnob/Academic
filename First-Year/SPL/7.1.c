/*Problem 7.1: Write a program using while loop to reverse the digits of the given
number. For example the number 12345 should be written as 54321
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("\nThe Number in reverse the digit is: ");
    while(n>0){
        printf("%d",n%10);
        n/=10;
    }
    
    return 0;
}