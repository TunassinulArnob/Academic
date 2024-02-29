/*
Problem 4.9: Write a program to read a four digit integer and print the sum of its 
digits. Hint: Use / and % operators
*/
#include<stdio.h>
int main(){ // start
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);//scan a number
    int sum=0; // initialize sum=0;
    while(n>0){
        sum+=n%10; // define sum = sum+ n%10
        n/=10; // update n=n/10
    }   //if n>0 repeat the loop from step 4. else break.
    printf("Sum of the digit of the number is %d\n",sum);// print sum
    return 0; //end
}