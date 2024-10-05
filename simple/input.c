#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number = ");
    scanf("%d",&a);

    printf("Enter the number = ");
    scanf("%d",&b);

    int c;
    c=a+b;
    printf("The sum is %d\n",c);

        int d,e;
        printf("Enter the number = ");
        scanf("%d",&d);
        e=c-d;
        printf("The difference is %d\n",e);

            int f,g;
            printf("Enter the number = ");
            scanf("%d",&f);
            g=e*f;
            printf("The product is %d\n",g);

                int h,i;
                printf("Enter the number = ");
                scanf("%d",&h);
                i=g%h;
                printf("The remainder is %d",i);
return 0;    
}