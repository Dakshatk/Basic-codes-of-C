#include<stdio.h>
void main(){
    int r;
    printf("Enter the radius = ");
    scanf("%d",&r);

        float area;
        area = 4*3.14*r*r;
        printf("Surface area = %f\n",area);

            float volume;
            volume = 1.33*3.14*r*r*r;
            printf("Volume = %f",volume);
}
