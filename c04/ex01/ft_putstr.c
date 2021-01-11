/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 02:25:15 by dtupinam          #+#    #+#             */
/*   Updated: 2020/12/04 23:50:29 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int  i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}

}

int main (void)
{

	char *str;
	
	str = "teste 15\n";

	ft_putstr(str);

}
