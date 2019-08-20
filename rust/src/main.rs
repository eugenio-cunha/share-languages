use std::time::{Instant};

fn fibonacci(n: u32) -> u32 {
    if n <= 1 { return n }

    return fibonacci(n-1) + fibonacci(n-2);
}

fn main() {
    let start = Instant::now();
    let result = fibonacci(40);
    let end = start.elapsed();

    println!("RUST Result {:?} - Time elapsed in fibonacci(40) is: {:?}", result, end);
}