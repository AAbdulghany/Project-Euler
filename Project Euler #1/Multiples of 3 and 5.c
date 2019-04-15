#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int t; 
    scanf("%ld",&t);
    
    for(long int i = 0; i < t; i++)
    {
      long int sum=0, p;
      long int n;
      scanf("%ld", &n);
      p=(n-1)/3;
      sum += (3*p*(p+1))/2;

      p=(n-1)/5;
      sum += (5*p*(p+1))/2;

      p = (n - 1) / 15;
      sum -= (15 * p * (p + 1)) / 2;

      printf("%ld \n", sum);
    }
    
    return 0;
}

