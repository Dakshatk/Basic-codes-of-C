#include<stdio.h>
void main(){
    int b,a = 1;
    printf("Enter the value = ");
    scanf("%d",&b);
    int product = 1;
    while(a<=10){

        product=b*a;
        printf("%d x %d = %d\n",b,a,product);
        a++;
        
    }

}