#include <stdio.h>

int main()
{

    int a = 2, b = 5;
    int c = a+b;
    printf("c = %d\n", c);
    int d = 2;
    int e = c-d;
    printf("e = %d\n", e);
    int f = 4;
    int g = e*f;
    printf("g = %d\n",g);
    int h = 6;
    int i = g%h;
    printf("i = %d\n",i);
    return 0;
}