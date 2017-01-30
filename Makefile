# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/28 15:14:23 by jtrujill          #+#    #+#              #
#    Updated: 2017/01/28 15:18:56 by jtrujill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = blackjack
INC = -I libft.h
FLAGS = gcc -Wall -Wextra -Werror

SRCS = black_jack.c get_card.c print_card.c dealer_hand.c print_instructions.c begin_play.c player_hand.c print_hand.c main.c

all: $(NAME)

$(NAME):
	$(FLAGS) $(INC) -o $(NAME) $(SRCS)

clean:
	rm -rf

fclean: clean
	rm -rf $(NAME)

re: fclean all
