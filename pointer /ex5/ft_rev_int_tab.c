/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:18:37 by akanaan           #+#    #+#             */
/*   Updated: 2025/10/30 16:15:58 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = size - 1;
	while (a < size / 2)
	{
		c = tab[a];
		tab[a] = tab[b];
		tab[b] = c;
		a++;
		b--;
	}
}
/*
int	main(void)
{
	int	tab [];
	int	size;
	int	a;

	tab [] = {5, 7, 2, 6, 3, 1};
	size = 6;
	ft_sort_int_tab(tab, size);
	a = 0;
	while (a < 6)
	{
		printf("%d", tab[a]);
		a++;
	}
	return (0);
}
*/
