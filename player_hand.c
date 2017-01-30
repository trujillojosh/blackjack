/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_hand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 14:39:47 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/29 15:34:50 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

int		player_hand(void)
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
	print_hand(hand, black_jack_hand(hand));
	while (black_jack_hand(hand) < 21)
	{
		memset(next, '\0', 50);
		printf("\n%s", "Would you like to Hit or Stay? ");
		fgets(next, sizeof(next), stdin);
		if ((next[0] == 'h') || (next[0] == 'H'))
		{
			hand[i] = get_card();
			i++;
		}
		else
		{
			break ;
		}
		res = black_jack_hand(hand);
		print_hand(hand, res);
	}
	//ft_printcard(hand);
	//res = black_jack_hand(hand);
	//printf("%s", "------------------------");
	//printf("\n Your  hand is --> %d", res);
	//printf("\n%s\n", "------------------------");
	printf("\n%s\n\n", "Calculating dealer hand...");
	return (res);
}
