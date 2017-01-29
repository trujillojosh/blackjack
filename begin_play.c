/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_play.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 23:38:29 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/29 00:22:58 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

void	being_play()
{

	int		chips;
	int		bet;

	chips = 100;
	bet = 0;
	while ((chips > 0) && (chips <= 999999999))
	{
		printf("%s", "Enter bet amount in multiple of two: ");
		if (

