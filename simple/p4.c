#include<stdio.h>
void main(){
    int n = 5;
    // for(int a=1;a<=2*n-1;a++){
    //     for(int i=2*n-1;i>=a;i--){
    //         printf(" ");
    //     }

    //     for(int j=1;j<=a;j++){
    //         if(a%2==1)
    //         printf("*");
    //     }
           
        
    //    for(int k=1;k<=2*n-1;k++){
    //     printf(" ");
    //    }
    //     printf("\n");
    // }


    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }


        //star 
        for(int j=0;j<2*i+1;j++){
            printf("*");
             
        }


        //space
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
   printf("\n");
    }
  

     
    
}