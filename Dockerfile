FROM drogonframework/drogon:latest
WORKDIR /app
EXPOSE 8080
EXPOSE 443

COPY . .

WORKDIR ./build

RUN cmake .. && make
ENTRYPOINT ["./extention-warships-server"]