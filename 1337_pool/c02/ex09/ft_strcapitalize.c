/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochiba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:42:21 by mochiba           #+#    #+#             */
/*   Updated: 2023/07/20 01:44:35 by mochiba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

void	convert(char	*str, int	*capitalize)
{
	if (*capitalize)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 'a' + 'A';
		*capitalize = 0;
	}
	else
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str - 'A' + 'a';
	}
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		if (ft_check(str[i]))
			convert(&str[i], &capitalize);
		else
			capitalize = 1;
		i++;
	}
	return (str);
}
