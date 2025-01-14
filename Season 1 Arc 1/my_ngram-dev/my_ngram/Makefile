CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = my_ngram
SRC = $(TARGET).c
OBJ = $(SRC:.c=.o)
all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) 

$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all