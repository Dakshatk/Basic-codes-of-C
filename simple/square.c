#include<stdio.h>
int main(){
    float side;
    printf("Enter the side of sq = ");
    scanf("%f",&side);

        float perimeter;
        perimeter = 4*side;
        printf("perimeter = %.2f\n",perimeter);

            float area;
            area = side*side;
            printf("area = %.2f",area);


    return 0;
}