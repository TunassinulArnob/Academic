/*  Problem 3.1: Write a program to determine and point the sum of the following
series for given value of n:
1 + 1/2 + 1/3 +……+ 1/n  */

#include<stdio.h>//start

int main(){
    float n;
    printf("\nEnter n to calculate the sum of the series : ");
    scanf("%f",&n);// read N from user
    float sum=0.0; // initialize sum=0.0;

    for(float i=1.0 ; i<=n; i++){ //start loop i=1 to n;
        sum+=1/i;       // assign sum=sum+1/i;
    }
    printf("\nSum is %.2f\n\n",sum);//print sum
    return 0;   //end
}