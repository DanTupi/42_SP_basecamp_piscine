/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 02:55:04 by dtakara           #+#    #+#             */
/*   Updated: 2020/11/23 12:12:58 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_column(int x, int y, char *a, char *b, char *c)
{
	if (y > 0)
	{
		ft_putchar(*a);
		y--;
	}
	while (y > 1)
	{
		ft_putchar(*b);
		y--;
	}
	if (y == 1)
	{
		ft_putchar(*c);
	}
	if (y >= 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0)
	{
		ft_column(x, y, "A", "B", "C");
		x--;
	}
	while (x > 1)
	{
		ft_column(x, y, "B", " ", "B");
		x--;
	}
	if (x == 1)
	{
		ft_column(x, y, "C", "B", "A");
	}
}
