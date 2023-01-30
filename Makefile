# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 12:42:06 by fbrisson          #+#    #+#              #
#    Updated: 2023/01/30 10:48:35 by fbrisson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SOURCES = Sources/main.c              		\
	Sources/ps_general_utils.c    		\
	Sources/ps_input_checker.c    		\
	Sources/ps_junior_sorter.c    		\
	Sources/ps_lst_utils.c        		\
	Sources/ps_parsing.c 	      		\
	Sources/ps_pushers.c          		\
	Sources/ps_radix_sorter.c     		\
	Sources/ps_reverse_rotators.c 		\
	Sources/ps_rotators.c         		\
	Sources/ps_swappers.c

OBJECTS = ${SOURCES:.c=.o}

COMPILER = cc

CFLAGS = -Wall -Wextra -Werror

HEADERS = -I Includes/

CLEANER = rm -f

nb:=1

total_objects=$(ls -l /Sources | wc -l)

COLOR_BLUE:=4

COLOR_LIGHT_BLUE:=6

COLOR_YELLOW:=3

COLOR_GREEN:=2

all: ${NAME}	
	@printf "\033[0;39m   (づ ￣ ³￣)づ   \033[0m"
	@printf "\033[0;34mC \033[0m"
	@printf "\033[0;36mO \033[0m"
	@printf "\033[0;34mM \033[0m"
	@printf "\033[0;36mP \033[0m"
	@printf "\033[0;34mI \033[0m"
	@printf "\033[0;36mL \033[0m"
	@printf "\033[0;34mA \033[0m"
	@printf "\033[0;36mT \033[0m"
	@printf "\033[0;34mI \033[0m"
	@printf "\033[0;36mO \033[0m"
	@printf "\033[0;34mN \033[0m"
	@printf "\033[0;36m   \033[0m"
	@printf "\033[0;32mS \033[0m"
	@printf "\033[0;32mU \033[0m"
	@printf "\033[0;32mC \033[0m"
	@printf "\033[0;32mC \033[0m"
	@printf "\033[0;32mE \033[0m"
	@printf "\033[0;32mS \033[0m"
	@printf "\033[0;32mS \033[0m"
	@printf "\033[0;32mF \033[0m"
	@printf "\033[0;32mU \033[0m"
	@printf "\033[0;32mL \033[0m"
	@printf "\033[0;32mL \033[0m"
	@printf "\033[0;39m    ~\(≧▽≦)/~ \033[0m\n"

.c.o:
	@${COMPILER} ${CFLAGS} ${HEADERS} -c $< -o ${<:.c=.o}
	@printf "\033[0;3%dmOBJECT [\033[0m" "$(COLOR_LIGHT_BLUE)"
	@printf "\033[0;3%dm%d\033[0m" "$(COLOR_YELLOW)" "$(nb)"
	@printf "\033[0;3%dm] -ready\033[0m\n" "$(COLOR_LIGHT_BLUE)"
	@printf "\033[0;3%dmCompiling... \033[0m" "$(COLOR_BLUE)"
	@printf "\033[0;3%dmSUCCESS\033[0m\n" "$(COLOR_GREEN)"
#	if [ ${nb} = ${total_objects} ]; then\
#		printf "\033[0;30mW\033[0m",\
#		printf "\033[0;31mO\033[0m",\
#		printf "\033[0;32mR\033[0m",\
#		printf "\033[0;33mK \033[0m",\
#		printf "\033[0;34mI\033[0m",\
#		printf "\033[0;35mS \033[0m",\
#		printf "\033[0;36mD\033[0m",\
#		printf "\033[0;37mO\033[0m",\
#		printf "\033[0;38mN\033[0m",\
#		printf "\033[0;39mE\033[0m\n";\
#	fi
	$(eval nb=$(shell echo $$(($(nb)+1))))


${NAME}: ${OBJECTS}
	@ar -rcs ${NAME} ${OBJECTS}

clean:
	@${CLEANER} ${OBJECTS}
	@printf "\033[0;39m   (っˆڡˆς)   \033[0m\n"
	@printf "\033[0;3%dmCleaning... \033[0m" "$(COLOR_BLUE)"
	@printf "\033[0;3%dmSUCCESS\033[0m\n" "$(COLOR_GREEN)"

fclean: clean
	@${CLEANER} ${NAME}
	@printf "\033[0;39m   (ﾉ☉ヮ⚆)ﾉ   \033[0m\n"
	@printf "\033[0;3%dmFull Clean... \033[0m" "$(COLOR_BLUE)"
	@printf "\033[0;3%dmSUCCESS\033[0m\n" "$(COLOR_GREEN)"

re : fclean all

.PHONY: all clean fclean bonus re
