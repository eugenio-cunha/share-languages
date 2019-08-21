FROM golang

WORKDIR /usr/src/app

ADD ./src .

RUN go build -o /bin/app .

CMD ["/bin/app"]  