/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_loan.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:36:18 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/30 14:41:14 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	small_loan(void)
{
	int	res;
	char	ans[50];
	
	ans = 
	res = 0;
	memset(ans, '.', 50);
	system("clear");
	printf("\n%s\n", "Hello, I'm Donald Trump, the greatest person of all time. I mean come on, I'm pretty great.\n
			I'm looking to invest in a new business venture, Trump University 2. We can charge all of these \n
			losers tons of money and hire other losers to teach them. It's gonna be a Yuuuuge success! \n
			To get started, all I need is a small loan of a million dollars.\n\nSo what do you say, are you in? Yes, or No? ");
	fgets(ans, sizeof(ans), stdin);
	if ((ans[0] == 'Y') || (ans[0] == 'y'))
	{
		printf("%s\n", "Congratulations on doing business with The Donald Trump. It must be a great honor for you. \n
			Don't worry, you can trust your money in my totally normal sized hands");
		sleep(1);
		printf("\ns\n", "
