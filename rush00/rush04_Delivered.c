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

void	ft_putchar(char a);

void	ft_column(int y, char *a, char *b, char *c)
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
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0)
	{
		ft_column(y, "A", "B", "C");
		x--;
	}
	while (x > 1)
	{
		ft_column(y, "B", " ", "B");
		x--;
	}
	if (x == 1)
	{
		ft_column(y, "C", "B", "A");
	}
}
