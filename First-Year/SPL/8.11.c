/*
Problem 8.11: Write a program that will compute the length of a given 
character string.
*/
#include<stdio.h>
#include<string.h>
int main(){              // start
    char s[101];
    printf("Enter a sting: ");          // scan string
    scanf("%s",s);
    int x=strlen(s);                // calculate string length using strlen() function
    printf("Lenth of given string is %d\n",x);          // print string length
    return 0;               // end
}