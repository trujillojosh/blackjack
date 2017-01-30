/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:09:34 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/29 15:48:53 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"
// #include <stdio.h>
// #include <stdlib.h>

// int		main(int argc, char **argv)
// {
// 	if (argc != 2)
// 	{
// 		printf("%s\n", "Error, enter one argument");
// 	}
// 	else
// 	{
// 		printf("%d\n", black_jack_hand(argv[1]));
// 	}
// 	return (0);
// }

// int		main(int argc, char **argv)
// {
// 	printf("%d\n", get_card());
// 	//ft_printcard(argv[1][0]);
// 	return (0);
// }

// int		main(void)
// {
// 	char	*res;

// 	res = dealer_hand();
// 	ft_printcard(res);
// 	printf("%s", "------------------------");
// 	printf("\n%s", " Dealer hand is --> ");
// 	printf("%d", black_jack_hand(res));
// 	printf("\n%s\n", "------------------------");
// 	return (0);
// }

// int		main(void)
// {
// 	char	test;

// 	printf("%s", "Enter something: ");
// 	test = (char)(getchar());
// 	printf("%d\n", test);
// 	return (0);
// }

int		main(void)
{
	char option;
	char input[50];

	memset(input, '\0', 50);
	printf("%s\n", "Welcome to blackjack, enter Help for instructions or Play to start Blackjack.");
	fgets(input, sizeof(input), stdin);
	option = input[0];
	if ((option == 'P') || (option == 'p') || (option == 'S') || (option == 's'))
		begin_play();
	else if ((option == 'H') || (option == 'h'))
		print_instructions();
	else
		printf("%s\n", "Your Dumbass couldn't even select one of two options, Goodbye.");
	return (0);
}

















