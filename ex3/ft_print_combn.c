/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:46:43 by akanaan           #+#    #+#             */
/*   Updated: 2025/10/24 23:29:57 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pr(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_combn(int n)
{
	char	a;
	char	b;

	a = '0';
	while (a < '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			pr(a, b);
			if (! (a == '8' && b == '9' ))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_combn(1);
	return (0);
}
