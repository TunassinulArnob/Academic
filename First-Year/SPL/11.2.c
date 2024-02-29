
#include<stdio.h>// start
struct personal{ // define a strutct with three data types
   char name[20];
   int d,m,y;
   float salary;
 };
int main(){
   struct personal p;
   printf("Enter Values: ");
   scanf("%s%d/%d/%d%f",p.name,&p.d,&p.m,&p.y,&p.salary); // scan the data by formate
   printf("\nName: %s\nDate of Joining: %d/%d/%d\nSalary: %.2f\n",p.name,p.d,p.m,p.y,p.salary); // print
 }