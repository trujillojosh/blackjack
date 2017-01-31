/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_loan.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:36:18 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/30 20:32:19 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

int	small_loan(void)
{
	int	res;
	char	ans[50];
	
	res = 0;
	memset(ans, '.', 50);
	system("clear");
	printf("\n%s", "Hello, I am Donald Trump, the greatest person of all time. I mean come on, I am pretty great.\nDonald is looking to invest in a new business venture, Trump University 2. We can charge all of these \nlosers tons of money and hire other losers to teach them. It is gonna be a Yuuuuge success! \nTo get started, all I need is a small loan of a million dollars.\n\nSo what do you say, are you in? Yes, or No? ");
	fgets(ans, sizeof(ans), stdin);
	printf("%c", '\n');
	if ((ans[0] == 'Y') || (ans[0] == 'y'))
	{
		printf("%s\n", "Congratulations on doing business with The Donald Trump. It must be a great honor for you. \nDo not worry, you can trust your money in my totally normal sized hands\n");
		sleep(3);
		printf("\n%s\n", "Annnnnd its gone");
		sleep(3);
		return (1);
	}
	else
	{
		printf("%s\n", "You are disgusting, The Donald didn't want to work with you anyway. Congratulations on \nhaving the chance to talk to me.");
		sleep(5);
		return (0);
	}
}
