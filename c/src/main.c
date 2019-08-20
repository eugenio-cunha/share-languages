#include <time.h>
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) { return n; }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    clock_t start = clock();
    int result = fibonacci(40);
    clock_t end = (double) (clock() - start);

    printf("C Result %i - Time elapsed in fibonacci(40) is: %ld", result, end);

	return 0;
}