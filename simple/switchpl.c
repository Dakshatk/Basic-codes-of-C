#include<stdio.h>
void main(){
    int sold;
    int cp;
    printf("Enter the CP = ");
    scanf("%d",&cp);

    int sp;
    printf("Enter the SP = ");
    scanf("%d",&sp);

    if(sp>cp){
        sold = 0;
    }
    else if(cp>sp){
        sold = -1;
    }
    else{
        sold = 3;
    }
     

        switch(sold){
            
            
            case 0:
            sold  = sp-cp;
            printf("Profit = %d",sold);
            break;

            
            case -1:
            sold = cp-sp;
            printf("Loss = %d",sold);
            break;

            case 3:
            printf("No profit or loss");
            break;
             
            default:
            printf("Enter valid prices");
            
        }

}