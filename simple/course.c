#include<stdio.h>
void main(){
    int Maths,Phy,Chem,total_sum,pm_sum;
    printf("Enter marks in maths = ");
    scanf("%d",&Maths);

    printf("Enter marks in Phy = ");
    scanf("%d",&Phy);

    printf("Enter marks in Chem = ");
    scanf("%d",&Chem);

    total_sum=Maths+Phy+Chem;
    printf("Total marks of Maths,Physics and Chemistry = %d\n",total_sum);

    pm_sum=Maths+Phy;
    printf("Total marks of Maths and Physics = %d\n",pm_sum);


        if((Maths>=65 && Phy>=55 && Chem>=50) && ( total_sum>=190 || pm_sum>=140)){
           printf("The candidate is eligible");
        }
            else{
                printf("The candidate is not eligible for admission");
            }
        
}