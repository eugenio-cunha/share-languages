package main

import (
    "fmt"
    "time"
)

func fibonacci(n int) int {
    if n < 2 { return n }

    return fibonacci(n - 1) + fibonacci(n - 2)
}

func main() {
    start := time.Now()
    result := fibonacci(40)
    end := time.Now()
    time_taken := end.Sub(start) / 1e6;

    fmt.Printf("GO Result %v - Time elapsed in fibonacci(40) is: %v \n", result, time_taken)
}