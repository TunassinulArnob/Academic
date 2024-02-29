//Problem 3.3: A Program to calculate the average of a set of N numbers.

#include<stdio.h>// Start
int main(){
    int n;
    printf("\nEnter The number of Elements of set: ");
    scanf("%d",&n);             //Read n from useer
    float num,sum=0.0,avg;  // define sum=0;
    printf("\nEnter %d number to calculate avarage of these numbers: ",n);
    for(int i=0 ; i<n; i++){
        scanf("%f",&num);    // scan N number .. and assign into sum ....
        sum+=num;        
    }
    printf("\nAverage of the given numbers is %.3f\n\n",sum/n); // Print sum
    
    return 0; // end
}