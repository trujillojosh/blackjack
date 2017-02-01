/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_hand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 14:39:47 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/30 20:39:47 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

int		player_hand(char *dealer)
{
	int		i;
	int		res;
	char	*hand;
	char	next[50];

	i = 0;
	res = 0;
	memset(next, '\0', 50);
	hand = strdup((const char *)("......................"));
	hand[i] = get_card();
	i++;
	hand[i] = get_card();
	i++;
	if (black_jack_hand(hand) == 21)
	{
		print_hand(hand, black_jack_hand(hand), 1);
		return (21);
	}
	while (black_jack_hand(hand) < 21)
	{
		system("clear");
		printf("%s", "..........................................\n\n");
		print_hand(dealer, black_jack_hand(dealer), 2);
		printf("%s", "\n..........................................\n\n");
		print_hand(hand, black_jack_hand(hand), 1);
		printf("%s", "\n..........................................\n");
		memset(next, '\0', 50);
		printf("\n%s", "Would you like to either Hit or Stand? ");
		fgets(next, sizeof(next), stdin);
		if ((next[0] == 'h') || (next[0] == 'H'))
		{
			hand[i] = get_card();
			i++;
		}
		else
		{
			return (black_jack_hand(hand));
		}
		res = black_jack_hand(hand);
		print_hand(hand, res, 1);
	}
	return (res);
}
