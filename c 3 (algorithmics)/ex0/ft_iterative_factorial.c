/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:37:06 by akanaan           #+#    #+#             */
/*   Updated: 2025/10/28 18:04:39 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	while (nb > 0)
	{
		i = nb * i;
		nb--;
	}
	return (i);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return (0);
}
*/
