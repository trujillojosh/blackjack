/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blackjack.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:11:52 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/28 15:13:20 by jtrujill         ###   ########.fr       */
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
char	*dealer_hand(void);

#endif
