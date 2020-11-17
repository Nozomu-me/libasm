NAME = libasm.a
CC = gcc
NASM = nasm -fmacho64
AR = ar rcs

SRC = ft_strlen.s \
	  ft_strcpy.s \
	  ft_strcmp.s \
	  ft_write.s \
	  ft_read.s \
	  ft_strdup.s \

OBJ = $(SRC:.s=.o) 

all: $(NAME)

$(NAME): $(OBJ)
		 $(AR) $(NAME) $(OBJ)

%.o : %.s 
	$(NASM) -s $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all   