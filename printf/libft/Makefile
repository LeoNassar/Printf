# Nom de la bibliothèque
NAME = libft.a

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Liste des fichiers source standards
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
      ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
      ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
      ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c \
      ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
      ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_isalpha.c \
      ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
      ft_tolower.c

# Liste des fichiers source bonus
BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
            ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
            ft_lstmap.c

# Correspondance des fichiers objets
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# Commandes standard
all: $(NAME)

# Règle de compilation de la bibliothèque
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

# Compilation des fichiers .o
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Ajout des parties bonus si la commande "make bonus" est appelée
bonus: $(OBJ) $(BONUS_OBJ)
	@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

# Nettoyage des fichiers objets
clean:
	@rm -f $(OBJ) $(BONUS_OBJ)
	@echo "Nettoyage des fichiers objets."

# Nettoyage complet (y compris la bibliothèque)
fclean: clean
	@rm -f $(NAME)
	@echo "Nettoyage complet."

# Recompiler proprement
re: fclean all

# Règles phony pour éviter les conflits avec des fichiers ayant ces noms
.PHONY: all clean fclean re bonus
