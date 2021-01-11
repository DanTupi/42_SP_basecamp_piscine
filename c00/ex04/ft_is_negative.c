/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:28:41 by dtupinam          #+#    #+#             */
/*   Updated: 2020/11/24 23:45:12 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_is_negative(int n)
{
	char c;

	if (n >= 0)
	{
		c = 'P';
		ft_putchar(c);
	}
	else
	{
		c = 'N';
		ft_putchar(c);
	}
}
