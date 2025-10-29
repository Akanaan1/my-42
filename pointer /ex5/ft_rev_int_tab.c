/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:18:37 by akanaan           #+#    #+#             */
/*   Updated: 2025/10/29 18:50:11 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
