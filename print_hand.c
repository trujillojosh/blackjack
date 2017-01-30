/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hand.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 14:50:04 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/29 14:50:34 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

void	print_hand(char *str, int i, int whois)
{
	ft_printcard(str);
	if (whois == 2)
	{
		printf("%s", "------------------------");
		printf("\n Dealer hand is --> %d", i);
		printf("\n%s\n", "------------------------");		
	}
	else
	{
		printf("%s", "------------------------");
		if (i > 21)
			printf("\n BUST, your hand is %d", i);
		else
			printf("\n Your hand is --> %d", i);
		printf("\n%s\n", "------------------------");
	}
}