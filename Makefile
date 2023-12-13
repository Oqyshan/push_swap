NAME_PUSH_SWAP	= 	push_swap
NAME_CHECKER	=	checker

CC 				=	gcc -g 
CFLAGS 			= 	-Wall -Wextra -Werror
RM				=	rm -f

SRCS_PUSH_SWAP 	= 	ctrls.c ctrls2.c \
					main.c rules1.c \
					rules2.c rules3.c \
					rules4.c quicksort.c \
					sort_ctrl.c get_middle.c \
					utils.c error_exit.c \
					utils2.c utils3.c \

SRCS_CHECKER	=	ctrls.c ctrls2.c \
					rules1.c \
					rules2.c rules3.c \
					rules4.c quicksort.c \
					sort_ctrl.c get_middle.c \
					utils.c error_exit.c \
					utils2.c utils3.c \
					checker.c checker_ctrls.c \
					get_next_line/get_next_line_bonus.c \
					get_next_line/get_next_line_utils_bonus.c \

all: 	$(NAME_PUSH_SWAP)

$(NAME_PUSH_SWAP): $(SRCS_PUSH_SWAP)
					@if [ ! -f .push_swap_compiled ]; then \
						echo "\033[1;34m               \033[0m"; \
						echo "\033[1;34m               \033[0m"; \
                        echo "\033[1;33m               Push Swap Compiling...\033[0m"; \
						echo "\033[1;34m               \033[0m"; \
						echo "\033[1;34m               \033[0m"; \
						echo "\033[1;31m ⠤⣤⣤⣤⣄⣀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣠⣤⠤⠤⠴⠶⠶⠶⠶"; \
						echo " ⢠⣤⣤⡄⣤⣤⣤⠄⣀⠉⣉⣙⠒⠤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠘⣉⢡⣤⡤⠐⣶⡆⢶⠀⣶⣶⡦"; \
						echo " ⣄⢻⣿⣧⠻⠇⠋⠀⠋⠀⢘⣿⢳⣦⣌⠳⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠞⣡⣴⣧⠻⣄⢸⣿⣿⡟⢁⡻⣸⣿⡿⠁"; \
						echo " ⠈⠃⠙⢿⣧⣙⠶⣿⣿⡷⢘⣡⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⣿⣷⣝⡳⠶⠶⠾⣛⣵⡿⠋⠀⠀"; \
						echo " ⠀⠀⠀⠀⠉⠻⣿⣶⠂⠘⠛⠛⠛⢛⡛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠛⠀⠉⠒⠛⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⢸⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⢻⡁⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⠘⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⠀⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo "\033[1;34m               \033[0m"; \
						echo "\033[1;34m               \033[0m"; \
						touch .push_swap_compiled; \
                    fi
					@$(CC) $(CFLAGS) $(SRCS_PUSH_SWAP) -o $(NAME_PUSH_SWAP)

bonus:	$(NAME_CHECKER)

$(NAME_CHECKER): $(SRCS_CHECKER)
					@if [ ! -f .checker_compiled ]; then \
						echo "\033[1;34m               \033[0m"; \
						echo "\033[1;34m               \033[0m"; \
						echo "\033[1;35m               Checker Compiling...\033[0m"; \
						echo "\033[1;34m               \033[0m"; \
						echo "\033[1;34m               \033[0m"; \
						echo "\033[1;31m ⠤⣤⣤⣤⣄⣀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣠⣤⠤⠤⠴⠶⠶⠶⠶"; \
						echo " ⢠⣤⣤⡄⣤⣤⣤⠄⣀⠉⣉⣙⠒⠤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠘⣉⢡⣤⡤⠐⣶⡆⢶⠀⣶⣶⡦"; \
						echo " ⣄⢻⣿⣧⠻⠇⠋⠀⠋⠀⢘⣿⢳⣦⣌⠳⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠞⣡⣴⣧⠻⣄⢸⣿⣿⡟⢁⡻⣸⣿⡿⠁"; \
						echo " ⠈⠃⠙⢿⣧⣙⠶⣿⣿⡷⢘⣡⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⣿⣷⣝⡳⠶⠶⠾⣛⣵⡿⠋⠀⠀"; \
						echo " ⠀⠀⠀⠀⠉⠻⣿⣶⠂⠘⠛⠛⠛⢛⡛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠛⠀⠉⠒⠛⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⢸⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⣿⠀⠀⠀                   ⠀⠀⠀⠀⠀        ⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⢻⡁⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⠘⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo " ⠀⠀⠀⠀⠀⠀⠀⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; \
						echo "\033[1;34m               \033[0m"; \
						echo "\033[1;34m               \033[0m"; \
						touch .checker_compiled; \
                    fi
					@$(CC) $(CFLAGS) $(SRCS_CHECKER) -o $(NAME_CHECKER)


clean:
					@$(RM) .push_swap_compiled
					@$(RM) .checker_compiled
					@echo "\n\n\033[1;31m               Push Swap Objects Deleted\033[0m\n\n"; \

fclean:	clean
					@$(RM) $(NAME_PUSH_SWAP) $(NAME_CHECKER)

re: 	fclean all

.PHONY: all bonus clean fclean re print print2