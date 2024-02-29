//Problem 3.8: Write a C program to print the square of a number.

#include<stdio.h> // start
int main(){
    int a;
    printf("\nEnter a number: ");
    scanf("%d",&a);// read a;
    printf("Square of %d id %d\n\n",a,a*a);// print a*a as square of a
    return 0; // end
}