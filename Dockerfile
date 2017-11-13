FROM gcc:4.9
COPY . /home/tcs/myapp	
WORKDIR /home/tcs/myapp
RUN gcc -o myapp fork.c
CMD ["./myapp"]
