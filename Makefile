# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 12:42:06 by fbrisson          #+#    #+#              #
#    Updated: 2023/01/31 15:21:37 by fbrisson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/zsh

NAME = push_swap

SOURCES = Sources/main.c              		\
	Sources/ps_general_utils.c    		\
	Sources/ps_input_checker.c    		\
	Sources/ps_junior_sorter.c    		\
	Sources/ps_junior_sorter_utils.c	\
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

COLOR_BLUE:=4

COLOR_LIGHT_BLUE:=6

COLOR_YELLOW:=3

COLOR_GREEN:=2

COLOR_RED:=1

all: ${NAME}	
	@printf "\033[0;39m   (づ ￣ ³￣)づ   "
	@printf "\033[0;34mC "
	@printf "\033[0;36mO "
	@printf "\033[0;34mM "
	@printf "\033[0;36mP "
	@printf "\033[0;34mI "
	@printf "\033[0;36mL "
	@printf "\033[0;34mA "
	@printf "\033[0;36mT "
	@printf "\033[0;34mI "
	@printf "\033[0;36mO "
	@printf "\033[0;34mN "
	@printf "\033[0;36m   "
	@printf "\033[0;32mS "
	@printf "\033[0;32mU "
	@printf "\033[0;32mC "
	@printf "\033[0;32mC "
	@printf "\033[0;32mE "
	@printf "\033[0;32mS "
	@printf "\033[0;32mS "
	@printf "\033[0;32mF "
	@printf "\033[0;32mU "
	@printf "\033[0;32mL "
	@printf "\033[0;32mL "
	@printf "\033[0;39m    ~\(≧▽≦)/~ \033[0m\n"

.c.o:
	@printf "\033[0;3%dmOBJECT [\033[0m" "$(COLOR_LIGHT_BLUE)"
	@printf "\033[0;3%dm%d\033[0m" "$(COLOR_YELLOW)" "$(nb)"
	@printf "\033[0;3%dm] -ready\033[0m\n" "$(COLOR_LIGHT_BLUE)"
	@printf "\033[0;3%dmCompiling... \033[0m" "$(COLOR_BLUE)"
	@if ( ${COMPILER} ${CFLAGS} ${HEADERS} -c $< -o ${<:.c=.o} );\
	then; printf "\033[0;3%dmSUCCESS\033[0m\n" "$(COLOR_GREEN)";\
	else; printf "\033[0;3%dmFAILURE\033[0m\n" "$(COLOR_RED)";\
	fi
	$(eval nb=$(shell echo $$(($(nb)+1))))


${NAME}: ${OBJECTS}
	@${COMPILER} ${CFLAGS} ${OBJECTS} -o ${NAME}


clean:
	@printf "\033[0;39m   (っ^з^)♪♬  \033[0m\n"
	@printf "\033[0;3%dmCleaning... \033[0m" "$(COLOR_BLUE)"
	@if ( ${CLEANER} ${OBJECTS} );\
	then; printf "\033[0;3%dmSUCCESS\033[0m\n" "$(COLOR_GREEN)";\
	else; printf "\033[0;3%dmFAILURE\033[0m\n" "$(COLOR_RED)";\
	fi


fclean: clean
	@printf "\033[0;39m   (ﾉ☉ヮ⚆)ﾉ   \033[0m\n"
	@printf "\033[0;3%dmFull Clean... \033[0m" "$(COLOR_BLUE)"
	@if ( ${CLEANER} ${NAME} );\
	then; printf "\033[0;3%dmSUCCESS\033[0m\n" "$(COLOR_GREEN)";\
	else; printf "\033[0;3%dmFAILURE\033[0m\n" "$(COLOR_RED)";\
	fi

re : fclean all

.PHONY: all clean fclean bonus re
