#include<stdio.h>
void prime(int i){
    int j;
    int count=0;
    for(j=2;j<=i;j++){
                    if(i%j==0){
                       count++;
                    }
    }
                    if(count==1){
                        printf("Prime number");
                    }
                    else{
                        printf("Not prime number");
                    }
    
}

void main(){
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    prime(a);
}