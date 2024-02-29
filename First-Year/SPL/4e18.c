/*
Problem 4.18: Write a program to compute the value of the expression 
x = a-b/3+c*2-1
*/
#include <stdio.h>

int main() {//start
    double a, b, c, x;
    printf("Enter a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);// read a,b,c
    x = a - b/3 + c*2 - 1; // define x= a - b/3 + c*2 - 1
    printf("x = %.2lf\n", x);// print x
    return 0;// end
}
