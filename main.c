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

int		main(void)
{
	char option;
	char input[50];

	memset(input, '\0', 50);
	system("clear");
	printf("%s", "\n\nWelcome to blackjack, enter Help for instructions or Play to start Blackjack. ");
	fgets(input, sizeof(input), stdin);
	option = input[0];
	if ((option == 'P') || (option == 'p') || (option == 'S') || (option == 's'))
		begin_play();
	else if ((option == 'H') || (option == 'h'))
		print_instructions();
	else
		printf("\n%s\n", "Your Dumbass couldn't even select one of two options, Goodbye.");
	return (0);
}

















