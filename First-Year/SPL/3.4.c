/*
Problem 3.4: A program to converts the given temperature in Fahrenheit to
Celsius using following conversion formula
𝐶 =(𝐹 − 32)/1.8
*/

#include<stdio.h>        // start
int main(){
    float f,c;
    printf("\nEnter Farenheit: ");
    scanf("%f",&f); // Read Faremheit 
    c=(f-32)/1.8;  // define c= (f-32)/1.8;
    printf("%.2f Degree Farenheit = %.2f Degree Celcius\n\n",f,c); // Print C 
    return 0;    // end
    
}