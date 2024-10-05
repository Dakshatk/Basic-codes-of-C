#include<stdio.h>
void main(){
    int time;
    printf("Enter the time = ");
    scanf("%d",&time);

        (time<=12)?printf("Good Morning"):
        (time>12 && time<=18)?printf("Good Afternoon"):
        (time>18 && time<=24)?printf("Good Evening"):printf("invalid time");
}