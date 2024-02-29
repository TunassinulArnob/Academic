/* Problem 3.10: Write a C program to input the values of days and convert it into years, weeks and days.*/
#include<stdio.h>//start
int main(){
    int day,week,year;
    printf("Enter day: ");
    scanf("%d",&day);//scan day
    year=day/365; //define year=day/365
    day=day%365;  // update day using day=day%365
    week=day/7;    // define week = day/7;
    day=day%7;  // update day=day%7;
    printf("Your day is equals: %d year %d months and %d Days\n",year,week,day);
    // print year,week , day
    return 0;// end

}

