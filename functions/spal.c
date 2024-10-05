#include<stdio.h>
void palindrome(int n){
    int reverse = 0,remainder;
    int temp = n;
     
    while(n!=0){
   
    remainder = n%10;
    reverse = reverse*10+remainder;
    n=n/10;
    }
    

    switch(temp==reverse){
        case 0:
        printf("False");
        break;

        case 1:
        printf("True");
        break;

        //default:
        //printf("False");
    }
    
}
void main(){
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    palindrome(a);

}
