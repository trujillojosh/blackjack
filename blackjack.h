/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blackjack.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:11:52 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/29 15:53:15 by jtrujill         ###   ########.fr       */
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
int		dealer_hand(void);
void	print_hand(char *str, int i);
void	begin_play(void);
int		player_hand(void);
void	print_instructions(void);
#endif
