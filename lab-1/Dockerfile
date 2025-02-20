FROM handsonsecurity/seed-ubuntu:small-arm

RUN apt-get update
RUN apt-get install -y gcc

WORKDIR /app
COPY . /app

RUN gcc -o task-2 task-2.c