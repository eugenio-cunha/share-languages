package main

import (
    "fmt"
    "time"
)

func fibonacci(n int) int {
    if n <= 1 { return n }

    return fibonacci(n-1) + fibonacci(n-2)
}

func main() {
    start := time.Now()
    result := fibonacci(40)
    end := time.Since(start)

    fmt.Printf("GO Result %d - Time elapsed in fibonacci(40) is: %s", result, end)
}