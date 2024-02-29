/*
Problem 8.13: Write a program to read a matrix of size 𝑚 × 𝑛 and print its 
transpose.

*/
#include<stdio.h>
int main(){ 
    int m,n;
    printf("Enter m and n for m x n matrix: ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("\nEnter value of %dx%d matrix:\n",m,n);
    for(int i=0 ; i<m; i++){
        for(int j=0 ;j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe transpose matrix is:\n");
    for(int i=0 ; i<n; i++){
        for(int j=0 ;j<m; j++){
            printf("%2d ",a[j][i]);
        }
        printf("\n");
    }
}