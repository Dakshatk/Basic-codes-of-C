#include<stdio.h>
int main(){
    float length,breadth;
    printf("Enter the length = ");
    scanf("%f",&length);

    printf("Enter the breadth = ");
    scanf("%f",&breadth);

    float perimeter;
    perimeter = 2*(length+breadth);
    printf("perimeter = %.2f\n",perimeter);

    float area;
    area = length*breadth;
    printf("area = %.2f",area);


    return 0;
}