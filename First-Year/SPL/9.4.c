/*
Problem 9.4: Write a program to find the number of vowels and consonants in a 
text string.

*/
#include<stdio.h>//start
#include<string.h>
int main(){
    char str[101];
    printf("Enter a String: ");
    scanf("%s",str);//scan string
    getchar();

    char vowel[10]={'a','e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};// define all vowels in an array..
    int i=0;
    int x;
    x=strlen(str);// find length of sting
    int cnt=0;
    for(int i=0; i<x; i++){
        for(int j=0 ; j<10; j++){
            if(str[i]==vowel[j]){ //check if charecter is vowel or not.. 
                cnt++;
                break;
            }
        }
    }
    printf("\n%d Vowels in the sting\n",cnt);
    printf("NUmber of consonent is %d\n",x-cnt);
    return 0;
}