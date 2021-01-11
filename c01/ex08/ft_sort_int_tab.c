/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:12:25 by dtupinam          #+#    #+#             */
/*   Updated: 2020/11/28 18:13:09 by dtupinam         ###   ########.fr       */
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

void ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}


void		ft_int_tab(int *tab, int size)
{
	int i;
	i = 0;
	
	while ( i < size)
	{
		ft_putnbr(tab[i]);
		i++;
	}
	ft_putchar('\n');

	
}

void		ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	
	i = 0;
	j = 0;

	while ( i < size - 1)
	{
		j = 0;
		while (j < size -1)
		{
			if (tab[j] > tab[j+1] )
			{
			ft_swap(&tab[j], &tab[j+1]);
			}
			j++;
		}
		i++;		
	}
	i = 0;
	
	while ( i < size)
	{
		ft_putnbr(tab[i]);
		i++;
	}
	ft_putchar('\n');
}