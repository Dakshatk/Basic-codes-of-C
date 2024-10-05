#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the number = ");
    scanf("%d",&a);

    printf("Enter the number = ");
    scanf("%d",&b);

    printf("Enter the number = ");
    scanf("%d",&c);

        if(a>b && a>c){
            printf("a is the largest number");
        }
            else if(b>a && b>c)
        {
            printf("b is the largest number");
        }
                else{
                    printf("c is the largest number");
                }
}