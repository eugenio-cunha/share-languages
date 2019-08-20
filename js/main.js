'use strict';

const fibonacci = n => {
    if (n <= 1) return n
    
    return fibonacci(n-1) + fibonacci(n-2);
}

const start = new Date().getTime();
const result = fibonacci(40);
const end = (new Date().getTime() - start) / 1000;

console.log(`RUST Result ${result} - Time elapsed in fibonacci() is: ${end}`);