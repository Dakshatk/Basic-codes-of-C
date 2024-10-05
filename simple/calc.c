#include<stdio.h>
void main(){
    int a,b;
    int opr;
    printf("Enter the number = ");
    scanf("%d",&a);

    printf("Enter the number = ");
    scanf("%d",&b);

    printf("1 is for addition\n2 is for subtraction\n3 is for product\n4 is for division\nEnter the operator number  = ");
    scanf("%d",&opr);

    
        switch(opr){
            case 1:
            printf("sum = %d",a+b);
            break;

            case 2:
            printf("difference = %d",a-b);
            break;

            case 3:
            printf("product = %d",a*b);
            break;

            case 4:
            printf("quotient = %d",a/b);
            break;

            default:
            printf("Enter a valid operator number");
        }
}