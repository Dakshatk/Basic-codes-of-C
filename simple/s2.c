#include <stdio.h>

int main() {
  int a = 7,b = 8;;
  char c;
  scanf("%c",&c);
  switch (c) {
    case '+':
      printf("%d",a+b);
      break;
    case '-':
      printf("%d",a-b);
      break;
    case '*':
      printf("%d",a*b);
      break;
    case '/':
      printf("%d",a/b);
      break;
  }
    
  return 0;
}