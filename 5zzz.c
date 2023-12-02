#include <stdio.h>

int fibonacci(int n) {
  if (n == 1 || n == 2) {
    return 1;
  }
  else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

int main() {

  int i;
  for (i=1; i<=10; i++) {
    printf("%d ", fibonacci(i)); 
  }

  return 0;
}