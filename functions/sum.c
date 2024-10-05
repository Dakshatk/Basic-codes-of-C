#include<stdio.h>
void sum(int n1,int n2){
    int add = n1+n2;
    printf("%d\n",add);
}
void sub(int n1,int n2){
    int diff = n1-n2;
    printf("%d\n",diff);
}
void mul(int n1,int n2){
    int prod = n1*n2;
    printf("%d\n",prod);
}
void div(int n1,int n2){
    float quot = n1/n2;
    printf("%.2f\n",quot);
}
void mod(int n1,int n2){
    int rem = n1%n2;
    printf("%d\n",rem);
}
void main(){
        int a,b;
        printf("Enter the number = ");
        scanf("%d",&a);
        printf("Enter the number = ");
        scanf("%d",&b);
    int opr;
        printf("Press 1 for sum\nPress 2 for subtraction\nPress 3 multiplication\nPress 4 for division\nPress 5 for remainder\n");
        scanf("%d",&opr);
    
    switch(opr){
        case 1:
            sum(a,b);
            break;
        case 2:
            sub(a,b);
            break;
        case 3:
            mul(a,b);
            break;
        case 4:
            div(a,b);
            break;
        case 5:
            mod(a,b);
            break;
        default:
            printf("Invalid operator");
    }
}