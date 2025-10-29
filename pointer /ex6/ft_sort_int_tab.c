/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:50:42 by akanaan           #+#    #+#             */
/*   Updated: 2025/10/29 19:28:29 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	while (a < size - 1)
	{
		b = a + 1 ;
			if (tab[a] > tab[b])
			{
				c = tab[b + 1];
				tab[b + 1] = tab[b];
				tab[b] = c;
				a = a - 2 ;
			}
			a++;

		}
		
	}
}
