#include<stdio.h>
void ab(int a){
    int sum=0;
    
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
void main(){
    int i;
     printf("Enter the number = ");
     scanf("%d",&i);
    ab(i);
}