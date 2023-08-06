/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochiba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:37:08 by mochiba           #+#    #+#             */
/*   Updated: 2023/07/29 23:39:25 by mochiba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	loop;
	int	result;

	result = 1;
	loop = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		while (power >= loop)
		{
			result *= nb;
			loop++;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}
