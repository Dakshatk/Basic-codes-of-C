#include<stdio.h>
void main(){
    char a;
    printf("Enter the character = ");
    scanf("%c",&a);
    if(a>=65 && a<=90){
        printf("Uppercase %d",a);
    }
    else if(a>=97 && a<=122){
    printf("Lowercase %d",a);
    }
    else if(a>=48 && a<=57){
        printf("It is a digit %d",a);
    }
    else{
        printf("It is a special character %d",a);
    }
}
