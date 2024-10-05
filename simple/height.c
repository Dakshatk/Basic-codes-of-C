#include<stdio.h>
void main(){
    int a;
    printf("Enter your height in cms = ");
    scanf("%d",&a);

        if(a<=145){
            printf("Dwarf");
        }
            else if(a>145 && a<=180){
                printf("Medium height");
            }
                else{
                    printf("Tall");
                }
}