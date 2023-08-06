/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochiba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:31:28 by mochiba           #+#    #+#             */
/*   Updated: 2023/07/13 18:23:39 by mochiba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb2(int x2, int y2, int x, int y)
{
	write(1, &x2, 1);
	write(1, &y2, 1);
	write(1, " ", 1);
	write(1, &x, 1);
	write(1, &y, 1);
	if (x != '9' || y != '9' || x2 != '9' || y2 != '8')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	while_f(int x2, int y2, int x, int y)
{
	x2 = '0';
	while (x2 <= '9')
	{
		y2 = '0';
		while (y2 <= '9')
		{
			x = x2;
			while (x <= '9')
			{
				y = y2 + 1;
				while (y <= '9')			{
					write_comb2(x2, y2, x, y);
					y++;
				}
				x++;
			}
			y2++;
		}
		x2++;
	}
}

void	ft_print_comb2(void)
{
	int	x2;
	int	y2;
	int	x;
	int	y;

	while_f(x2, y2, x, y);
}

int main () {
	ft_prin_comb2()
	return 0:
}
