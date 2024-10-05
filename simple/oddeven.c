#include<stdio.h>
void main(){
  int a;
  printf("Enter the number  = ");
  scanf("%d",&a);
  if(a%2==0){
    printf("The number %d is even ",a);
  }
  else{
    printf("The number %d is odd ",a);
  }

}