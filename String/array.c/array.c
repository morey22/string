#include<stdio.h>
int main() {
    int  day;
    int month;
    int year;
    printf("enter the day :");
    scanf("%d", &day);
    printf("enter the month :");
    scanf("%d", &month);
    printf("enter the year :");
    scanf("%d", &year);

    int age;
    int cyear;
    printf("enter the cyear :");
    scanf("%d", &cyear);
    age = cyear - year;
    printf("%d",age);
    return 0;
}