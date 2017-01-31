/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_card.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:21:07 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/28 17:21:21 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

char	get_card(void)
{
	int	i;
	char c;

	c = '\0';
	i = arc4random_uniform(12);
	if ((i >= 2) && (i <= 9))
		c = '0' + i;
	else if (i == 0)
		c = 'A';
	else if (i == 1)
		c = 'T';
	else if (i == 10)
		c = 'J';
	else if (i == 11)
		c = 'Q';
	else if (i == 12)
		c = 'K';
	return (c);
}