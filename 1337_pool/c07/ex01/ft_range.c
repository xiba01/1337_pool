/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochiba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:30:08 by mochiba           #+#    #+#             */
/*   Updated: 2023/08/02 20:19:40 by mochiba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	arr = malloc(range * sizeof(int));
	if (!arr)
		return (0);
	while (i < range)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
