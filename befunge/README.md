# Befunge

## Docker
```
docker pull esolang/befunge98

docker run --rm -v "$PWD":/code:ro esolang/befunge98 befunge98 /code/hello.b98
```

## Hello World
```
>              v
v  ,,,,,"Hello"<
>48*,          v
v,,,,,,"World!"<
>25*,@
``` 