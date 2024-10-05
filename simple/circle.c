#include<stdio.h>
void main(){
    int radius;
    printf("Enter the radius = ");
    scanf("%d",&radius);

    float area;
    area = 3.14*radius*radius;
    printf("%.1f\n",area);

    float perimeter;
    perimeter = 2*3.14*radius;
    printf("%.2f",perimeter);

}