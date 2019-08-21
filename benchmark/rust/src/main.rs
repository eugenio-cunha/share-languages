extern crate libc;

mod ffi {
    extern {
        pub fn clock() -> ::libc::clock_t;
    }
}

fn fibonacci(n: u64) -> u64 {
    if n < 2 { return n; }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

fn main() {
    let start = unsafe { ffi::clock() };
    let result = fibonacci(40);
    let end = unsafe { ffi::clock() };
    let time_taken = end - start;

    println!("RUST Result {:?} - Time elapsed in fibonacci(40) is: {:?}", result, time_taken);
}