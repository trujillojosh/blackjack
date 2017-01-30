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
	char	init;
	int		player;
	int		dealer;

	chips = 100;
	bet = 0;
	while ((chips > 0) && (chips <= 999999999))
	{
		sleep(1);
		system("clear");
		player = 0;
		dealer = 0;
		bet = 0;
		memset(buf, '.', 50);
		printf("\nNew Round, starting chip count is %d.\n", chips);
		printf("%s", "Enter bet amount: ");
		fgets(buf, sizeof(buf), stdin);
		printf("%c", '\n');
		bet = atoi(buf);
		if (bet < 0)
			bet = bet * -1;
		if (bet >= chips)
		{
			bet = chips;
			printf("%s\n", "I see you are all in, I too like to live dangerously.");
		}
		sleep(2);
		// printf("\nBet is %d.\n\n", bet);
		init = get_card();
		player = player_hand(init);
		printf("\n%s\n\n", "Calculating dealer hand...");
		sleep(2);
		dealer = dealer_hand(init);
		printf("\nPlayer is %d, dealer is %d\n\n", player, dealer);
		if ((player <= 21) && ((player > dealer) || (dealer > 21)))
		{
			if ((player > dealer) || (dealer > 21))
			{
				chips = chips + (bet * 2);
				printf("You win this round, new chip count is %d\n\n", chips);
			}
		}
		else if ((player == dealer) && (player < 22))
			printf("It's a push, chip count remains at %d\n\n", chips);
		else
		{
			chips = chips - bet;
			printf("You lose this round, new chip count is %d\n\n", chips);

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
		printf("\n\nHope you had fun playing, your final chip count is %d. Goodbye\n", chips);
	}
}
