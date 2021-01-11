/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 02:00:39 by dtupinam          #+#    #+#             */
/*   Updated: 2020/12/02 02:04:20 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char *str;
	int i;
	
	str = "do a hexdump -C";
	i = 0;
	while ( str[i] != '\0')
	{
		addr[i] = str[i];
		i++;
	}
	return (addr);
}
	
