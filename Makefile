main_files	= ft_strlen \
			 ft_memmove \
			 ft_memcpy \
			 ft_strlcpy \
			 ft_strlcat \
			 ft_isalpha \
			 ft_isdigit \
			 ft_isalnum \
			 ft_isascii \
			 ft_isprint \
			 ft_memset \
			 ft_bzero \
			 ft_toupper \
			 ft_tolower \
			 ft_strchr \
			 ft_strrchr \
			 ft_strncmp \
			 ft_memchr \
			 ft_memcmp \
			 ft_strnstr \
			 ft_atoi \
			 ft_calloc \
			 ft_strdup \
			 ft_substr \
			 ft_strjoin \
			 ft_strtrim \
			 ft_itoa \
			 ft_split \
			 ft_strmapi \
			 ft_striteri \
			 ft_putchar_fd \
			 ft_putstr_fd \
			 ft_putendl_fd \
			 ft_putnbr_fd \

bonus_files	= ft_lstnew_bonus \

Compiler	= cc

CmpFlags	= -Wall -Wextra -Werror

OUTN	= libft.a

MAINCFILES	= $(main_files:%=%.c)

BONUSCFILES = $(bonus_files:%=%.c)

OMAINFILES	= $(main_files:%=%.o)

OBONUSFILES	= $(bonus_files:%=%.o)

NAME	= libft.a

%.o : %.c
	$(Compiler) $(CmpFlags) -c $<
$(NAME): $(OMAINFILES)
	ar rcs $(NAME) $^ 

bonus: $(OBONUSFILES) $(NAME)
	ar rcs $(NAME) $^

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OMAINFILES)
	rm -f $(OBONUSFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: bonus, all, clean, fclean, re
