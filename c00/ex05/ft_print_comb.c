/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:47:14 by dtupinam          #+#    #+#             */
/*   Updated: 2020/11/25 12:21:56 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = 47;
	while (i++ <= 55)
	{
		j = i;
		while (j++ <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					ft_putchar(44);
					ft_putchar(32);
				}
				k++;
			}
		}
	}
}
