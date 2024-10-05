#include<stdio.h>
void main(){
    char alp;
    
    printf("Enter the alphabet = ");
    scanf("%c",&alp);

    if (alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u' ){
        printf("It is vowel");
    }
    else{
        printf("It is consonant");
    }
}