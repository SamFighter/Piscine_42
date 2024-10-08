CC = cc
EXEC = prog

all : $(EXEC)

$(EXEC) : main.o
	$(CC) -o $(EXEC) main.o -Wall -Werror -Wextra
main.o : main.c
	$(CC) -o main.o -c main.c -Wall -Werror -Wextra
	
clean :
	rm -rf *.o
	rm -rf prog
