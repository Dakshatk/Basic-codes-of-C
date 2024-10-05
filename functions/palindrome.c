#include<stdio.h>
void palindrome(int n){
    int reverse = 0,remainder;
    int temp = n;
     
    while(n!=0){
   
    remainder = n%10;
    reverse = reverse*10+remainder;
    n=n/10;
    }
    
    if(temp==reverse){
        printf("It is a palindrome\n");
        }
    else{
        printf("It is not a palindrome\n");
        }
    
}
void main(){
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    palindrome(a);

}
