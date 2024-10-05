#include<stdio.h>
void main(){
    int a, reverse=0,remainder;
    printf("Enter the number = ");
    scanf("%d",&a);
    int temp=a;
    while(a!=0){
        remainder =  a%10;
        reverse = reverse*10 + remainder;
        a=a/10;
        printf("remaining %d,current reverse %d\n",a,reverse);
    }
    printf("Reversed number = %d\n",reverse);
    if(temp==reverse){
        printf("It is a palindrome");
    }
    else{
        printf("It is not a palindrome");
    }
}