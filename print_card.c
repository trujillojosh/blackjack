/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_card.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:22:18 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/28 17:18:57 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

void	ft_printcard(char *str)
{
	char c;
	int	 i;
	int	 len;
	int  tmp;

	i = 0;
	len = 0;
	if (str[1] == '\0')
	{
		str[1] = str[0];
		str[0] = '?';
		str[2] = '\0';
	}
	while ((str[len] != '.') && (str[len] != '\0'))
	{
		len++;
	}
	tmp = len;
	while (tmp > 0)
	{
		printf("%s", "######");
		tmp--;
	}
	printf("%s", "###\n");
	tmp = len;
	while (tmp > 0)
	{
		c = str[i];
		if (tmp != 1)
			printf("# %c   ", c);
		else
			printf("# %c     ", c);
		i++;
		tmp--;
	}
	printf("%s", "#\n");
	tmp = len;
	while (tmp > 0)
	{
		printf("%s", "#     ");
		tmp--;
	}
	printf("%s", "  #\n");
	tmp = len;
	while (tmp > 0)
	{
		printf("%s", "#     ");
		tmp--;
	}
	printf("%s", "  #\n");
	tmp = len;
	while (tmp > 0)
	{
		printf("%s", "#     ");
		tmp--;
	}
	printf("%c #\n", c);
	tmp = len;
	while (tmp > 0)
	{
		printf("%s", "######");
		tmp--;
	}
	printf("%s", "###\n");
}
