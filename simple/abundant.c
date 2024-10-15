#include<stdio.h>
void main(){
    int a,sum=0;
    printf("Enter a number = ");
    scanf("%d",&a);


        for(int d=1;d<=a;d++){
            if(a%d==0){
                sum = sum + d;
                printf("%d ",d);
                
            }
        
        }
        int temp = sum - a;
        printf("\nSum = %d\n",temp);
            if(temp>a){
                printf("Abundant number");
            }
            else{
                printf("Not abundant number");
            }
}