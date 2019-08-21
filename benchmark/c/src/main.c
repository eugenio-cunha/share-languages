#include <time.h>
#include <stdio.h> 
#include <stdint.h> 

static uint64_t fibonacci(uint64_t n) {
  if (n < 2) return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}


int main() {
    clock_t start, end;
    
    start = clock();
    int result = fibonacci(40);
    end = clock() - start;

    double time_taken = ((double)end) / CLOCKS_PER_SEC;
    printf("C Result %llu - Time elapsed in fibonacci(40) is: %lf ms", result, time_taken);

	return 0;
}