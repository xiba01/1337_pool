/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochiba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 03:46:46 by mochiba           #+#    #+#             */
/*   Updated: 2023/07/30 01:21:46 by mochiba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_sz;
	unsigned int	src_sz;
	unsigned int	j;

	dest_sz = 0;
	src_sz = 0;
	while (dest[dest_sz] || src[src_sz])
	{
		if (dest[dest_sz])
			dest_sz++;
		else if (src[src_sz])
			src_sz++;
	}
	if (dest_sz >= size)
		return (size + src_sz);
	j = dest_sz;
	while (j < size - 1 && *src)
	{
		dest[j] = *src;
		j++;
		src++;
	}
	dest[j] = '\0';
	return (dest_sz + src_sz);
}
