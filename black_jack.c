/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   black_jack_hand.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 14:53:05 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/26 16:51:01 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		black_jack_hand(char *str)
{
	int		i;
	int		a;
	int		j;

	i = 0;
	a = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == '2')
			i = i + 2;
		else if (str[j] == '3')
			i = i + 3;
		else if (str[j] == '4')
			i = i + 4;
		else if (str[j] == '5')
			i = i + 5;
		else if (str[j] == '6')
			i = i + 6;
		else if (str[j] == '7')
			i = i + 7;
		else if (str[j] == '8')
			i = i + 8;
		else if (str[j] == '9')
			i = i + 9;
		else if ((str[j] == 'T') || (str[j] == 'J') || (str[j] == 'D') || (str[j] == 'K'))
			i = i + 10;
		else if (str[j] == 'A')
		{
			a++;
			if (a > 1)
				i = i + 1;
		}
		j++;
	}
	if (a >= 1)
	{
		if ((i + 11) <= 21)
			i = i + 11;
		else
			i = i + 1;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	printf("%d", black_jack_hand(argv[1]));
	return (0);
}
