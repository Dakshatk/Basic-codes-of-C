#include<stdio.h>
void main(){
    float a;
    printf("Rice = ",a);
    scanf("%f",&a);
    
    float b;
    printf("Dal = ",b);
    scanf("%f",&b);

    float c;
    printf("Sugar = ",c);
    scanf("%f",&c);

    float d;
    printf("Teabags = ",d);
    scanf("%f",&d);

    float sum;
    sum = a+b+c+d;
    printf("Total Amount = %.2f\n",sum);

    float Total_amt;

    float discount;
        if(sum>500){
            discount=0.1*sum;
            Total_amt = sum - discount;
            printf("Discounted amount = %.2f\n",Total_amt);
        }
        else{
            printf("Total amount = %d\n",sum);
        }
}