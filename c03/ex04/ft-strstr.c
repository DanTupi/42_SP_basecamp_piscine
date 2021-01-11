/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:32:20 by dtupinam          #+#    #+#             */
/*   Updated: 2020/12/04 00:36:23 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(char *c)
{
	unsigned i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);	
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i+j])
			{
				if ((ft_strlen(to_find) - 1) == j)
				{
					return (str + i);
				}
				j++;
			}
		i++;
	}
	return (0);
}
