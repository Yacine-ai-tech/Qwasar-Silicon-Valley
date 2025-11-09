CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = my_mastermind
SRC =my_mastermind.c my_game_functions.c
OBJ = $(SRC:.c=.o)
all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) 
$(OBJ) : $(my_headers.h)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean  all