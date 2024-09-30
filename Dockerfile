FROM drogonframework/drogon:latest
WORKDIR /app
EXPOSE 8080
EXPOSE 5555

COPY . .

WORKDIR ./build

RUN cmake .. && make
ENTRYPOINT ["./extention-warships-server"]