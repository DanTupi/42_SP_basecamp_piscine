/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 19:21:34 by dtupinam          #+#    #+#             */
/*   Updated: 2020/12/04 19:53:55 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char strc)
{
	if (strc == '\t' || strc == '\n' || strc == 'v' || strc == '\f' ||
	strc == '\r' || strc == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	n;
	int sign;
	int	number;

	n = 0;
	sign = 1;
	number = 0;
	while (ft_isspace(str[n]))
		n++;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			sign *= -1;
		n++;
	}
	while ((str[n] > '0') && (str[n] < 58))
	{
		number = ((number * 10) + (str[n] - 48));
		n++;
	}
	return (sign * number);
}
