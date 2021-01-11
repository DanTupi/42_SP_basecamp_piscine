/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 01:16:48 by dtupinam          #+#    #+#             */
/*   Updated: 2020/12/02 04:22:37 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_backslash_zero(char *c)
{
	if (*c <= 9)
	{
		ft_putchar('\\');
		ft_putchar('0');
		ft_putchar('0' + *c);
	}
	else
	{
		ft_putchar('\\');
		ft_putchar('0');
		ft_putchar('a' + (*c - 10));
	}
}

void	ft_put_backslash_one(char *c)
{
	if (*c <= 9)
	{
		ft_putchar('\\');
		ft_putchar('1');
		ft_putchar('0' + (*c - 16));
	}
	else
	{
		ft_putchar('\\');
		ft_putchar('1');
		ft_putchar('a' + (*c - 26));
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 15)
		{
			ft_put_backslash_zero(&str[i]);
			i++;
		}
		else if (str[i] > 15 && str[i] <= 31)
		{
			ft_put_backslash_one(&str[i]);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}
