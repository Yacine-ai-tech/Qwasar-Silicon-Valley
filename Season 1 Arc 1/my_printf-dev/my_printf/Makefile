CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = my_printf
SRC =my_printf.c 
OBJ = $(SRC:.c=.o)
all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) 


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean  all