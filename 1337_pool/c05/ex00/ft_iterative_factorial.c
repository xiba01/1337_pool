/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochiba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:36:17 by mochiba           #+#    #+#             */
/*   Updated: 2023/07/29 23:36:19 by mochiba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	multip;
	int	loop;

	multip = 1;
	loop = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (nb >= loop)
		{
			multip = multip * loop; 
			loop++;
		}
		return (multip);
	}
	return (0);
}
