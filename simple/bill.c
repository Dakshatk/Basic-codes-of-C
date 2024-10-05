#include<stdio.h>
void main(){
    int cid;
    printf("Enter the cid = ");
    scanf("%d",&cid);

    float unit;
    printf("Enter the unit consumed = ");
    scanf("%f",&unit);
    
    float charge;
    if(unit<=199){
        charge = 1.20*unit;
        printf("Amount charges @Rs 1.20 per unit: %.2f\n",charge);
    }
    else if(unit>199 && unit<=400){
        charge = 1.50*unit;
        printf("Amount charges @Rs 1.50 per unit: %.2f\n",charge);
    }
    else if(unit>400 && unit<=600){
        charge = 1.80*unit;
        printf("Amount charges @Rs 1.80 per unit: %.2f\n",charge);
    }
    else{
        charge = 2.00*unit;
        printf("Amount charges @Rs 2.00 per unit: %.2f\n",charge);
    }

    float surcharge;
    if(charge>400){
        surcharge=charge*0.15;
        printf("Surcharge Amount : %.2f\n",surcharge);
    }
    float Net_amt;
    Net_amt = surcharge+charge;
    printf("Net Amount Paid By the Customer = %.2f",Net_amt);
}
