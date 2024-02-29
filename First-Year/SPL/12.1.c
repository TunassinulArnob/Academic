/*
Programming Exercise:
Problem 12.1: Write a program using pointers to read in an array of integers and
print its elements in reverse order.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter n , number you want to input: ");
    scanf("%d",&n);
    printf("Enter %d number: ",n);
    int a[n]; //a[0]......
    int *ptr;// .......
    ptr=&a; //ptr = a[0]///
    ptr=(int*)malloc(n*sizeof(int*));// byte....n *4.. 5*4 =20
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);//%d, &a
    }
    for(int i=n-1; i>=0; i--){
        printf("%d ",*ptr+i);
    }
}

