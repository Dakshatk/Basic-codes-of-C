#include <stdio.h>  

void main(){
    int i,j,a,b;
    printf("Enter the number = ");
    scanf("%d",&a);

    printf("Enter the number = ");
    scanf("%d",&b);

        for(i=1;i<=10;i++){
            for(j=a;j<=b;j++){
            printf("%d x %d = %d\t",j,i,j*i);
        }printf("\n");
    }
}