# Benchmark

```bash
docker image build -t clang .
docker image build -t golang .
docker image build -t rustlang .

docker container run --rm -it clang
docker container run --rm -it golang
docker container run --rm -it rustlang

#    C Time elapsed in fibonacci(40) is: 0.566763 ms
#   GO Time elapsed in fibonacci(40) is: 0.554000 ms
# RUST Time elapsed in fibonacci(40) is: 0.424988 ms
```

