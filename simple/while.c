#include<stdio.h>
void main(){
    int a=1;
    int sum=0;
    int product=1;
    while(a<=10){
        sum+=a;
        product*=a;
        a++;
    }
    printf("%d\n",sum); 
    printf("%d",product);
}