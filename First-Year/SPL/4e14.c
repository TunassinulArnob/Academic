/*
Problem 4.14: Write a program to print a table of sin and cos functions for the 
interval from 0 to 180 degrees in increments of 15 a shown here
*/
#include<stdio.h> // start
#include<math.h>
#define pi 3.12159 // define pi = 3.14159
int main(){
    printf("X(degrees)\tSin(x) \tCos(x)\n");
    for(float i=0.0; i<=180 ; i+=15){ // initialize i=0 to 180.. increment i=i+15
        // convert degree to radian.. x= i*pi/180
        printf("%3.2f\t\t%3.2f \t%3.2f\n",i,sin(i*pi/180.0),cos(i*pi/180.0));
        // print degree(i), sin(x) , cos(x);
    }
    return 0; // end
}