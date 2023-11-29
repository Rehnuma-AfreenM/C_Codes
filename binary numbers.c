// convert decimal to binary

#include <stdio.h>
#include <math.h>

long long convert(int);

int main() {
  int n, bin;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  bin = convert(n);
  printf("%d in decimal =  %lld in binary", n, bin);
  return 0;
}

long long convert(int n) {
  long long bin = 0;
  int r, i = 1;

  while (n!=0) {
    r = n % 2;
    n /= 2;
    bin += r * i;
    i *= 10;
  }

  return bin;
}
