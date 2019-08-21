## RUST

```bash
docker build -t rustapp .
docker run --rm -it rustapp

# Interactions: 165580141
# RUST Result 102334155 - Time elapsed in fibonacci() is: 458.45559ms
```

## Ownership
Como funciona a desalocação de objetos em Rust

Em Rust, todo objeto no heap é de propriedade de uma, e somente uma, variável. 
Quando esta variável sai de contexto, Rust automaticamente remove o objeto da memória.
```rust
fn main() {
  let a = String::from("Foo");
  let b = a;

  println!("A is {} and B is {}", a, b); // <= essa linha causa um erro de compilação.
}
```
Transferência de ownership ao chamar uma função

Em Rust, quando chamamos uma função passando um valor como parâmetro, 
transferimos o ownership do valor para a variável que representa o parâmetro na função.

O código a seguir é inválido em Rust:
```rust
fn main() {
  let a = String::from("Foo");
  print_string(a);
  println!("A is {}", a); // essa linha causa um erro de compilação.
}

fn print_string(s: String) {
  println!("{}", s);
}
```

Pelo pouco que podemos ver até aqui, o conceito de ownership parece impor uma série de dificuldades ao programador. Entretanto, ela se compensa!

Sabendo que apenas uma variável, em um dado momento, tem a propriedade de um valor, o compilador de Rust consegue gerar código nativo inteligente de desalocação, com segurança assegurada durante a compilação, sem os memory-leaks das linguagens não gerenciadas e sem os overheads de processamento causados pelos GCs.

Rust não tem um runtime. Programas em Rust são muito rápidos!
```rust
fn main() {
  let a = String::from("Foo");
  let a = print_string(a);
  println!("A is {}", a);
}

fn print_string(s: String) -> String {
  println!("{}", s);
  s
}
```

Macros declarativas em Rust
A linguagem Rust incentiva a criação de macros (rotinas executadas durante a compilação) como forma de melhorar ainda mais a performance de nossas aplicações. Entretanto, em Rust, as macros são mais fáceis de criar e de entender do que em C++.

```rust
macro_rules! hello {
    () => { println!("Hello from Macros World"); }
}

fn main() {
    hello!()
}
```

```csharp
public Customer GetById(int id)
{
  // ..
}
```

Rust não tem null nem exceptions

Rust rompe com a forma como programadores C# (e Java) estão acostumados a expressar erros. Não há null nem exceptions

A mesma função que escrevemos em C#, em Rust poderia ter uma assinatura assim:
```rust
fn getById(id: i32) -> Result<Customer, String> {
  // ..
}
```
A assinatura dessa função indica claramente que um erro pode acontecer e, que, caso um erro ocorra uma string será retornada (provavelmente com uma mensagem explicando erro).
O compilador de Rust gera warnings sempre que um Result<T, E> é retornado mas não é utilizado. O uso padrão do retorno ocorre, geralmente, através de pattern matching (outra característica recorrente de linguagens com influência funcional).


Rust permite o retorno de multiplos valores
```rust
fn get() -> (i32, bool) {
    return (300, true);
}

fn main() {
    let (a, b) = get();
    println!("A is {} and B is {}", a, b);
}
```

O Rust possui pattern matching 