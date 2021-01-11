/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:52:34 by dtupinam          #+#    #+#             */
/*   Updated: 2020/12/03 12:11:41 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int validate;

	i = 0;
	validate = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			validate = 0;
			return (validate);
		}
		i++;
	}
	return (validate);
}
