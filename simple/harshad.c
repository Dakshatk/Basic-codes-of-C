#include<stdio.h>
void main(){
    int a,remainder;
    printf("Enter the number = ");
    scanf("%d",&a);
    int temp=a;
    int sum=0;
    while(a>0){
        remainder =  a%10;
        sum = sum + remainder;
        a=a/10;
        
        
    }
    printf("%d\n",sum);
    if(temp%sum==0){
        printf("It is a Harshad number");
    }
    else{
        printf("It is not Harshad number");
        
    }
}