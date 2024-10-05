#include<stdio.h>
void kirana(float a,float b,float c,float d){


    float sum;
    sum = a + b + c + d;
    printf("Total Amount = %.2f\n",sum);

    float Total_amt;

    float discount;
        if(sum>500){
            discount=0.1*sum;
            Total_amt = sum - discount;
            printf("Discounted amount = %.2f\n",Total_amt);
        }
        else{
            printf("Total amount = %.2f\n",sum);
        }
        
}
void main(){
   float n1,n2,n3,n4;
   printf("Enter the number = ");
   scanf("%f",&n1);

   printf("Enter the number = ");
   scanf("%f",&n2);

   printf("Enter the number = ");
   scanf("%f",&n3);

   printf("Enter the number = ");
   scanf("%f",&n4);

    kirana(n1,n2,n3,n4);
}
