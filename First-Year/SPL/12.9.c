
/*
Worked Out Problems:
Problem 12.9: Write a program to illustrate the use of structure pointers.*/
#include<stdio.h>
struct student{
    int roll;
    char name[20];
    float gpa;
};

int main(){
    struct student s;
    struct student *ptr;
    ptr=&s;

    printf("Enter Roll Number: ");
    scanf("%d",&ptr->roll);
    printf("\nEnter name: ");
    scanf("%s",ptr->name);
    printf("\nEnter GPA: ");
    scanf("%f",&ptr->gpa);

    printf("\n\n Name: %s\tRoll: %d \tGPA:%.2f\n",ptr->name,ptr->roll,ptr->gpa);
    return 0;
    
}