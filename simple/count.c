#include<stdio.h>
void main(){
    int n, remainder, reverse = 0;
    printf("Enter a number = ");
    scanf("%d", &n);
    int temp = n;

        int square = n*n;
        printf("Square = %d\n", square);

            int count = 0;
              while (n!= 0) {
              remainder = n % 10;
              n = n / 10;
              count++;
              }
               printf("final = %d\n",count);

                unsigned long long int result = 1;
                int i = 1 ;
                while(i<=count) {
                result = result*10;
                i++;
                }
    
                printf("result = %llu\n", result);

                int r = square % result;
                printf("r = %d\n", r);
                printf("temp = %d\n", temp);

                    if (temp == r) {
                        printf("Automorphic\n");
                    } 
                    else {
                        printf("Not Automorphic\n");
                    }
}
