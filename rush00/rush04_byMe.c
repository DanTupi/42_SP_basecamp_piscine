/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:54:56 by dtupinam          #+#    #+#             */
/*   Updated: 2020/11/22 23:52:46 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int g_i;
int g_j;

void	ft_top_line(int x, int y, int g_i)
{
	g_i = 2;
	if ((x > 0) && (y > 0))
	{
		ft_putchar('A');
		if (x > 2)
		{
			while (g_i < x)
			{
				ft_putchar('B');
				g_i = g_i + 1;
			}
		}
		if (x > 1)
		{
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

void	ft_spec_line(int x, int y, int g_i, int g_j)
{
	g_i = 2;
	g_j = 2;
	if ((x > 0) && (y > 2))
	{
		while (g_i < y)
		{
			ft_putchar('B');
			if (x > 2)
			{
				while (g_j < x)
				{
					ft_putchar(' ');
					g_j = g_j + 1;
				}
			}
			if (x > 1)
			{
				ft_putchar('B');
			}
			ft_putchar('\n');
			g_i = g_i + 1;
		}
	}
}

void	ft_bot_line(int x, int y, int g_i)
{
	g_i = 2;
	if ((x > 0) && (y > 1))
	{
		ft_putchar('C');
		if (x > 2)
		{
			while (g_i < x)
			{
				ft_putchar('B');
				g_i = g_i + 1;
			}
		}
		if (x > 1)
		{
			ft_putchar('A');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	ft_top_line(x, y, g_i);
	ft_spec_line(x, y, g_i, g_j);
	ft_bot_line(x, y, g_i);
}
