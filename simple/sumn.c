#include<stdio.h>
void main(){
    int a;
    printf("Enter a four digit number = ");
    scanf("%d",&a);

    int rem=a%10;
    printf("%d\n",rem);

    int div=a/1000;
    printf("%d\n",div);

    int sum = 0;
    sum = div+rem;
    printf("sum = %d",sum);
}