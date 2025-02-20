# Lab 1 - CSCI 567
This lab demonstrates the use of Docker to compile and run a simple C program that prints environment variables. The project includes a Dockerfile for building the environment and a Docker Compose file for managing the container.

## Running the Container
Start the container using Docker Compose:

```bash
docker-compose up --build --watch
```

## Connecting to the Container
```bash
docker exec -it lab-1-seed-ubuntu /bin/bash
```