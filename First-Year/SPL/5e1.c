/*
Problem 5.1: Given the string {“ WORDPROCESSING”, write a program to read 
the string from the terminal and display the same in the following formats:
a) WORD PROCESSING
b) WORD 
PROCESSING
c) W.P.
*/
#include<stdio.h>
#include<string.h>
int main(){ // start
    char str[15];// scan the string
    scanf("%s",str); //
    printf("\n(a) : ");
    for(int i=0; i<15; i++){
        if(i==3){//if 
            printf("%c ",str[i]);
        }else{
            printf("%c",str[i]);
        }
    }
    printf("\n\n(b): ");
    for(int i=0; i<15; i++){
        if(i==3){
            printf("%c\n     ",str[i]);
        }else{
            printf("%c",str[i]);
        }
    }
    printf("\n\n(c): ");
    printf("%c.%c.\n\n",str[0],str[4]);
    return 0;
}