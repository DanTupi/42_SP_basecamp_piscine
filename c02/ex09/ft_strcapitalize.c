/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtupinam <dtupinam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:59:48 by dtupinam          #+#    #+#             */
/*   Updated: 2020/12/03 16:04:46 by dtupinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_to_lower(char *a, char *b)
{
	if ((*b >= ' ' && *b <= '/') ||
		(*b >= ':' && *b <= '@') ||
		(*b >= '[' && *b <= '`') ||
		(*b >= '{' && *b <= '_'))
	{
		*a = *a - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = (str[0] - 32);
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			ft_to_lower(&str[i], &str[i - 1]);
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if ((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
			(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			{
				str[i] = (str[i] + 32);
			}
		}
		i++;
	}
	return (str);
}
