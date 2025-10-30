/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:50:42 by akanaan           #+#    #+#             */
/*   Updated: 2025/10/30 09:40:02 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a < size - 1)
	{
		b = 0 ;
		while (b < size - 1 - a)
		{
			if (tab[b] > tab[b + 1])
			{
				c = tab[b + 1];
				tab[b + 1] = tab[b];
				tab[b] = c;
			}
			b++;
		}
		a++;
	}
	return ;
}
/*
int main ()
{
	int tab[]={5, 7, 2, 6, 3, 1};
	int size = 6;

	ft_sort_int_tab(tab, size);

	int a = 0;
	while (a<6)
	{
		printf("%d", tab[a]);
		a++;
	}
	return (0);
}
*/
