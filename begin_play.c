/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_play.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 23:38:29 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/29 14:22:31 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

void	begin_play(void)
{

	int		chips;
	int		bet;
	char	buf[50];
	char	more[50];
	int		player;
	int		dealer;

	chips = 100;
	bet = 0;
	while ((chips > 0) && (chips <= 999999999))
	{
		player = 0;
		dealer = 0;
		bet = 0;
		memset(buf, '.', 50);
		printf("\nNew Round, starting chip count is %d.\n", chips);
		printf("%s", "Enter bet amount: ");
		fgets(buf, sizeof(buf), stdin);
		bet = atoi(buf);
		if (bet < 0)
			bet = bet * -1;
		// if (bet % 2 != 0)
		// {
		// 	bet++;
		// 	if (chips != 0)
		// 		chips--;
		// }
		if (bet >= chips)
		{
			bet = chips;
			printf("\n%s\n", "I see you are all in, I too like to live dangerously, ");
		}
		printf("\nBet is %d.\n\n", bet);
		player = player_hand();
		sleep(2);
		dealer = dealer_hand();
		if ((player <= 21) && ((player >= dealer) || (dealer > 21)))
		{
			if ((player > dealer) || (dealer > 21))
			{
				chips = chips + (bet * 2);
				printf("You win this round, new chip count is %d\n", chips);
			}
			else
			{
				printf("It's a push, chip count remains at %d\n", chips);
			}
		}
		else
		{
			chips = chips - bet;
			printf("You lose this round, new chip count is %d\n", chips);

		}
		memset(more, '.', 50);
		if (chips > 0)
		{
			printf("%s", "Would you like to continue, Yes or No? ");
			fgets(more, sizeof(more), stdin);
		}
		if ((more[0] == 'n') || (more[0] == 'N'))
			break ;
	}
	if (chips <= 0)
		printf("%s", "You lost, better luck next time. Goodbye\n");
	else
	{
		printf("Hope you had fun playing, your final chip count is %d. Goodbye\n", chips);
	}
}
