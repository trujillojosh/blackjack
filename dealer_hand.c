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

char	*dealer_hand(void)
{
	int		i;
	char	*hand;

	i = 0;
	hand = strdup((const char *)("......................"));
	while (black_jack_hand(hand) < 17)
	{
		hand[i] = get_card();
		i++;
	}
	return (hand);
}
