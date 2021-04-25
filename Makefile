NAME = libasm.a

#LIBASM

LASM_INCLUDES_DIR = includes/

LASM_INCLUDES_FILES	= libasm.h

LASM_SRCS_DIR = srcs/

LASM_SRCS_FILES	=	ft_write.s \
		  			ft_read.s \
		  			ft_strlen.s \
		  			ft_strcmp.s \
		 			ft_strcpy.s \
		  			ft_strdup.s

LASM_SRCS_FILES_BONUS = ft_list_size.s

OBJS_DIR = ./

#OBJS/SRCS/INCLUDES

INCLUDES = $(addprefix $(LASM_INCLUDES_DIR), $(LASM_INCLUDES_FILES))
SRCS = $(addprefix $(LASM_SRCS_DIR), $(LASM_SRCS_FILES))
SRCS_BONUS = $(addprefix $(LASM_SRCS_DIR), $(LASM_SRCS_FILES_BONUS))
OBJS = $(SRCS:.s=.o)
OBJS_BONUS = $(SRCS_BONUS:.s=.o)

#GLOBAL VARIBLES

CC = clang
RAN = ar rcs #equivalent to ar rc && ranlib
RM = /bin/rm -rf
PRINT = printf
CFLAGS = -Wall -Werror -Wextra
NASM = nasm -fmacho64

HIDE_CURSOR := \e[?25l
SHOW_CURSOR := \e[?25h
CURSOR_LEFT := \e[1000D
ERASE_ENDLINE := \e[K
ERASE_FULLLINE := \e[2K

#rules

all	: $(NAME)

bonus		: $(OBJS_BONUS)
		@$(PRINT) "$(ERASE_FULLLINE)\033[1;34m%-20s\033[1;33m%-25s\033[0;32m[OK]\033[0m\n$(SHOW_CURSOR)" "Compiled lib" "$(NAME)"
		@$(RAN) $(NAME) $(OBJS_BONUS)

$(NAME)	: $(OBJS)
		@$(PRINT) "$(ERASE_FULLLINE)\033[1;34m%-20s\033[1;33m%-25s\033[0;32m[OK]\033[0m\n$(SHOW_CURSOR)" "Compiled lib" "$(NAME)"
		@$(RAN) $(NAME) $(OBJS)

.s.o : $(SRCS)
		@$(NASM) $< -o $@

show_cursor:
		@printf "\033[0;32mCursor Printed. \033[0m$(SHOW_CURSOR)\n"

clean		: 
		@$(RM) $(OBJS) $(OBJS_BONUS)
		@$(PRINT) "\033[1;34m%-20s\033[1;33m%-25s\033[0;32m[OK]\033[0m\n" "Cleaning objects" "$(NAME)"

fclean		: clean
		@$(RM) $(NAME)
		@$(PRINT) "\033[1;34m%-20s\033[1;33m%-25s\033[0;32m[OK]\033[0m\n" "Cleaning lib" "$(NAME)"

re		: fclean all bonus

.PHONY		: all, clean, fclean, re, bonus
		



	  
	 
