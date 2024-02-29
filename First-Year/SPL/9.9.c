/*
Problem 9.10: Write a program that reads a string and prints if it is a palindrome 
or not.
*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[101];
    printf("Enter a string: ");
    scanf("%s",a);
    int x=strlen(a);
    int n=0;

    for(int i=0;  i<x; i++){
        if(a[i]!=a[x-i-1]){
            n=1;
            break;
        }
    }
    
    if(n==0){
        printf("It is Palindromic.\n");
    }else{
        printf("String is not Palindromic.\n");
    }
}