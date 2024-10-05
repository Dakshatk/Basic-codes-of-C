#include<stdio.h>
int main(){
    float P,R,T,SI;
    printf("Enter the Principle amt = ");
    scanf("%f",&P);

    printf("Enter the rate = ");
    scanf("%f",&R);

    printf("Enter the time in years = ");
    scanf("%f",&T);

    SI = P*R*T/100.0;
    printf("%.3f",SI);


    return 0;
}