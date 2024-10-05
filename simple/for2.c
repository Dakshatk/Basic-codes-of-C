#include <stdio.h>  

void main(){
    int n,i;
    int cube;
        printf("Input number of terms :");
        scanf("%d",&n);

        for(i=1;i<=n;i++){
            
            cube=i*i*i;
            printf("Number is :%d and cube of the %d is :%d\n",i,i,cube);
            
        }

}