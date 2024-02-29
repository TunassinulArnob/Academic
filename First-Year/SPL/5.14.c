//Write a C program to display the following pattern.

#include<stdio.h>
int main(){// start
    for(int i=0; i<5 ; i++){  // start a loop for row from 0 to 4 increment by 1
        for(int s=1; s<=i; s++){ // inside loop for space.. for 1 to i, increment by one 
            printf("  ");
        }
        for(int j=5-i; j>0; j--){ // anothor loop for number j.. j from 5-i to 0 , decrement by one
            printf("%d ",j);
        }       
        printf("\n"); // print endline syntax

    }
    return 0; // end
}