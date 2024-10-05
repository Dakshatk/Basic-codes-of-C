#include<stdio.h>
void main(){
    int sum=0;
    int b;
    float avg;
    
    
    for(int a=1;a<=10;a++){
         printf("Number-%d :", a);

         scanf("%d",&b);
       
          sum+=a;
          avg=sum/10.0;
    }
          printf("\nThe Sum is : %d",sum);
          printf("\nThe average is : %f",avg);
}