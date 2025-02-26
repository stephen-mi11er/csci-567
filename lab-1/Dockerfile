FROM handsonsecurity/seed-ubuntu:small-arm

RUN apt-get update
RUN apt-get install -y gcc

WORKDIR /app
COPY . /app

RUN gcc -o task-2 task-2.c
RUN gcc -o task-3 task-3.c
RUN gcc -o task-4 task-4.c
RUN gcc -o task-5 task-5.c

RUN useradd -m -s /bin/bash smiller
RUN echo "smiller:smiller" | chpasswd
USER root
RUN echo "root:root" | chpasswd

RUN echo 'export LD_LIBRARY_PATH=/app' >> /home/smiller/.bashrc
RUN echo 'export CUSTOM_ENV=custom_value' >> /home/smiller/.bashrc
RUN echo "export PS1='\u@\h:\w\$ '" >> /home/smiller/.bashrc