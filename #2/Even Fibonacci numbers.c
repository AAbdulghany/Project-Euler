#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  for (int a0 = 0; a0 < t; a0++) {
    long int  n;
    scanf("%ld", &n);
    long int sum = 0;
    long int last = 1, next = 2, temp = 0;
    while (next < n) {
      temp = next;
      if (next % 2 == 0) {
        sum += next;
      }
      next += last;
      last = temp;
    }
    printf("%ld\n", sum);
  }
  return 0;
}
