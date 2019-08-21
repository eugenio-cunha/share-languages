FROM gcc:latest

WORKDIR /usr/src/app

COPY ./src .

RUN gcc -o app main.c

CMD ["./app"] 