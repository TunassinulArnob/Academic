/*
Problem 4.10: Write a program to read three values from keyboard and print out 
the largest of them without using if statement.
*/
#include<stdio.h>
int main(){// start
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c); //  scan three number a,b,c
    max = a>b? a:b; // use turnery operator to find max between a and b
    max= max > c ? max : c; // again use turnery operator to find max between max and c;
    printf("Largest of the three is %d\n",max); // print max;
    return 0; // end
}