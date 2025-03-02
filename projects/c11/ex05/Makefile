CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c operator.c
OBJ = $(SRC:.c=.o)

TARGET = do-op

all: $(TARGET)

main.o: main.c operator.h
	@$(CC) $(CFLAGS) -c main.c -o main.o

operator.o: operator.c operator.h
	@$(CC) $(CFLAGS) -c operator.c -o operator.o

$(TARGET): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(TARGET)

re: fclean all
