#include<stdio.h>
void main(){
    int a,b,c;
    
    printf("Enter the value = ");
    scanf("%d %d",&a,&c);
    
    for(a;a<=c;a++){
       
     for (b=1;b<=10;b++){
        int product = 1;
        product=a*b;
       printf("%d x %d = %d\t",a,b,product);
       printf("%d\t",product);
       //printf("\n");
     }
     }
    
}