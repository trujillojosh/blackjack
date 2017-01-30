/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blackjack.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:11:52 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/29 19:54:23 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int		black_jack_hand(char *str);
char	get_card(void);
int		main(void);
void	ft_printcard(char *str);
int		dealer_hand(char c);
void	print_hand(char *str, int i, int whois);
void	begin_play(void);
int		player_hand(char *dealer);
void	print_instructions(void);
#endif
