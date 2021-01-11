/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:15:38 by dtupinam          #+#    #+#             */
/*   Updated: 2020/11/28 18:41:19 by dtupinam         ###   ########.fr       */
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

void		ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

void		ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	
	i = 0;
	j = size - 1;
	while ( i < (size/2))
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}


	i = 0;
		while ( i < size)
	{
		ft_putnbr(tab[i]);
		i++;
	}
	ft_putchar('\n');
}
