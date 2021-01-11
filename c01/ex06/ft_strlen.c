/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:01:42 by dtupinam          #+#    #+#             */
/*   Updated: 2020/11/27 13:07:47 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void		ft_strlen(char *str)
{
	int i;

	while (*(str+i) != '\0')
	{
		i++;
	}
	ft_putnbr(i);
}
