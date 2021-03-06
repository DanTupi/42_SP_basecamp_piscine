/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 00:26:39 by dtupinam          #+#    #+#             */
/*   Updated: 2020/12/05 00:38:21 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	int j;

	j = 1;
	if (argc > 0)
	{
		while (j < argc)
		{
			ft_putstr(argv[j]);
			ft_putchar('\n');
			j++;
		}
	}
}	
