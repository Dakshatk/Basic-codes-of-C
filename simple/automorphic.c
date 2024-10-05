#include<stdio.h>
#include<math.h>
void main(){
    int n,remainder,reverse=0;
   
    printf("Enter a number = ");
    scanf("%d",&n);
     int temp = n;

        int square;
        square=n*n;
        printf("Square = %d\n",square);

            int count=0;
            while(n!=0){
            remainder = n%10;
            n = n/10;
            count++;
            
            }
            printf("final = %d\n",count);
            int a=10;
            unsigned long long int result = (unsigned long long int) pow(a,count);
                printf("result = %llu\n", result);

                int r = square%result;
                printf("r = %d\n",r);
                printf("temp = %d\n",temp);
            if(temp==r){
                printf("Automorphic");
            }
                else{
                    printf("Not Automorphic");
                }
            
}