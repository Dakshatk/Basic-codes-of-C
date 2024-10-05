#include<stdio.h>

int main(){
    int a;
    printf("Enter the age = ");
    scanf("%d",&a);
    if(a>=18){
        printf("Eligible to vote",a);
    }
    else{
        printf("Not eligible to vote",a);
    }
return 0;
}