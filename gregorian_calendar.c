#include <stdio.h>
int main () {
    int basic_year,leap_year,non_leap_year,year,days,difference;
    basic_year=2001;
    printf("enter any year=");
    scanf("%d",&year);
    difference= year-basic_year;
    leap_year= difference/4;
    non_leap_year=difference-leap_year;
    days=(leap_year*366)+(non_leap_year*365) +1;
    if (days%7==0) {
        printf("it is sunday");
    }
    else if (days%7==1){
        printf("it is monday");
    }
    else if (days%7==2) {
        printf("it is tuesday");
    }
    else if (days%7==3){
        printf("it ie wednesday");
    }
    else if (days%7==4){
        printf("it is thrusday");
    }
    else if (days%7==5){
        printf("it is friday");
    }
    else if (days%7==6) {
        printf("it is saturday");
    }
    else {
        printf("wrong entry");
    }
    return 0;
}