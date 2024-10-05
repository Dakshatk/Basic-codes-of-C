#include<stdio.h>

int main() {
  int a;
  printf("Enter the number = ");
  scanf("%d",&a);
   if(a<0){
     printf("The Number is negative %d",a);
    }
    else
    {printf("The Number is not negative %d",a);
    }
  
  return 0;
}