/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 00:40:38 by dtupinam          #+#    #+#             */
/*   Updated: 2020/12/05 00:47:24 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unitsd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, **argv)
{
	int j;
	
	j = argc -1;
	if(argc > 0)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j--;
	}
}
