#include<stdio.h>
    void main(){
        int a,b;
        scanf("%d %d",&a,&b);
        
        for(int i=1;i<=10;i++){
            for(int j=a;j<=b;j++){
               // if(j%2==1){
                printf("%d\t",i*j);
               // }
            
            }
            printf("\n");
        }
    }