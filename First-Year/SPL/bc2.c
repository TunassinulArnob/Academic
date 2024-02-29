/*
Brief Case 2: 
An equation of the form 𝑎*𝑥*x + 𝑏*𝑥 + 𝑐 = 0
is known as the quadratic equation. The value of x that satisfy the equation are 
known as the roots of the equation. A quadratic equation has two roots which are 
given by the following two formula:
𝑟𝑜𝑜𝑡1 = (-b + 𝑠𝑞𝑟𝑡(𝑏*b-4*𝑎*𝑐)/2*𝑎
𝑟𝑜𝑜𝑡2 = (-b - 𝑠𝑞𝑟𝑡(𝑏*b-4*𝑎*𝑐)/2*𝑎
Write a program to evaluate these roots. The program requests the user to input 
the values of a, b and c and output root 1 and root 2.
*/
#include<stdio.h>
#include<math.h>
int main(){ //start
    float a,b,c,x1,x2,d;
    printf("Enter a,b and c: ");
    scanf("%f%f%f",&a,&b,&c); // scan a,b,c
    d= b*b-4*a*c ; // define d= b*b-4*a*c
    if(a==0 || d<0){ // check elogobility.. if a==0 or d<0 print invalid. go to end..
        printf("Invalid Input.\n");
        return 0;
    }else{ // else go to next step
        x1= (-b+sqrt(d))/(2*a);// define root1=(-b+sqrt(d))/(2*a)
        x2= (-b-sqrt(d))/(2*a);// root 2=(-b-sqrt(d))/(2*a)
    }
    printf("Root 1: %.2f\tRoot 2: %.2f\n",x1,x2);// print root 1 nd root 2
    return 0; // end
}