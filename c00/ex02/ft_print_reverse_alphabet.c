/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:39:55 by dtupinam          #+#    #+#             */
/*   Updated: 2020/11/24 17:37:26 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print_reverse_alphabet(void)
{
	char c;

	c = 0x7b;
	while (c-- > 0x61)
	{
		ft_putchar(c);
	}
}
