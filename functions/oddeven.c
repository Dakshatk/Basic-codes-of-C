#include<stdio.h>
void oddeven();
void main(){
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    oddeven(a);
}
void oddeven(int n){

        if(n%2==0){
            printf("Number is even");
        }
        else{
            printf("Number is odd");
        }
}
