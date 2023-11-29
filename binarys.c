// convert decimal to binary

#include <stdio.h>
#include <math.h>

int main() {
  int n,i=1,x=0,r;

  printf("enter a numbers");
  scanf("%d",&n);

  while (n!=0) {
    r = n % 2;
    n /= 2;
    x += r * i;
    i *= 10;
    printf("%d",x);
  }

}

