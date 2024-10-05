#include<stdio.h>

void main(){
    int n,i,sum;
    printf("Enter the number = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2==1){
            printf("%d ",i);
             sum+=i;
        }
       
        printf("%d",i);
    }
    
}