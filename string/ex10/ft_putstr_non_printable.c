/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:13:57 by akanaan           #+#    #+#             */
/*   Updated: 2025/11/04 19:54:40 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ali(char a)
{
	write (1, &a, 1);
}

void	al(char a)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ali(hexa[a / 16]);
	ali(hexa[a % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	b;

	b = 0;
	while (str[b] != '\0')
	{
		if (str[b] >= 0 && str[b] <= 31)
		{
			write (1, "\\", 1);
			al(str[b]);
		}
		else
		{
			ali(str[b]);
		}
		b++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Hello\nhow are you ?");
}
*/
