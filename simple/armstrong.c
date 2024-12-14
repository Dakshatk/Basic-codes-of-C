#include<stdio.h>
#include<math.h>
void main(){
    int n,remainder;
    printf("Enter a number = ");
    scanf("%d",&n);

        int count=0;
            while(n!=0){
            remainder = n%10;
            n = n/10;
            count++;
            }

                    printf("final = %d\n",count);
                            int a=;
                            int result = (int) pow(a,count);
                                printf("result = %d\n", result);
            
}