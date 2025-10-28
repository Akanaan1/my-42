/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:04:15 by akanaan           #+#    #+#             */
/*   Updated: 2025/10/28 13:59:55 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	l;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	i = 1;
	l = nb;
	while (i < power)
	{
		l = nb * l;
		i++;
	}
	return (l);
}
/*
int main ()
{
	printf("%d", ft_iterative_power(2,4));
	return (0);
}
*/
