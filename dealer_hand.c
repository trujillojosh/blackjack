/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dealer_hand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:31:00 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/28 18:55:40 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

int		dealer_hand(char c)
{
	int		i;
	int		res;
	char	*hand;

	i = 0;
	res = 0;
	hand = strdup((const char *)("......................"));
	hand[i] = c;
	i++;
	while (black_jack_hand(hand) < 17)
	{
		hand[i] = get_card();
		i++;
	}
	ft_printcard(hand);
	res = black_jack_hand(hand);
	printf("%s", "------------------------");
	printf("\n Dealer hand is --> %d", res);
	printf("\n%s\n\n", "------------------------");
	return (res);
}
