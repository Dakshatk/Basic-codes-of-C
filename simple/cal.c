#include<stdio.h>
void main(){
    int a;
    printf("Enter 1st no. = ");
    scanf("%d",&a);

    int b;
    printf("Enter 1st no. = ");
    scanf("%d",&b);

    int opr;
    printf("Enter the opr by no ");
    scanf("%d",&opr);

    switch(opr){

        case 1:
        printf("Sum = %d",a+b);
        break;

        case 2:
        printf("diff = %d",a-b);
        break;

        case 3:
        printf("prod = %d",a*b);
        break;

        case 4:
        printf("Sum = %d",a/b);
        break;

        case 5:
        printf("Sum = %d",a%b);
        break;

        default:
        printf("Invalid operator");
    
    }

    if(b==0){
        printf("Error");
    }
}