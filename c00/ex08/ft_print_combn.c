/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:08:27 by dtupinam          #+#    #+#             */
/*   Updated: 2020/11/29 01:21:41 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int i)
{
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
}

void		ft_print_combn(int n)
{
	int i;
	int j;
	j = 1;
	while (n > 0)
	{
		j = j * 10;
		n--;
	}
	while ((i % 10) > (i / 10) || i < 9)
	{
		ft_putnbr(i);
		if ((i / 10) < ((j / 10) - 2) || ((j < 11 ) && i < (j - 1) ))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		i++;
		while ((i / 10) >= (i % 10) && (i / 10) < (j / 10))
		{
			i++;
		}
	}
}
