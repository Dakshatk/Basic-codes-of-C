#include<stdio.h>
void power(int n){
    float square = n*n;
    printf("%.2f\n",square);

        float cube = n*n*n;
        printf("%.3f\n",cube);
}
void main(){
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    power(a);
}