/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:13:25 by akanaan           #+#    #+#             */
/*   Updated: 2025/11/04 17:37:41 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	b;
	int	a;

	b = 0;
	while (str[b] != '\0')
	{
		if (str[b] >= 'A' && str[b] <= 'Z')
		{
			str[b] = str[b] + 32;
		}
		b++;
	}
	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a - 1] >= 'a' && str [a - 1] <= 'z'))
			if (!(str [a - 1] >= 'A' && str [a - 1] <= 'Z'))
				if (!(str [a - 1] >= '0' && str [a - 1] <= '9'))
					if (str[a] >= 'a' && str[a] <= 'z')
						str[a] = str[a] - 32;
		a++;
	}
	return (str);
}
/*
int	main(void)
{
	char	c[]= "hello, how are you doing? 42words forty-two; fifty+and+one";

	printf("%s", ft_strcapitalize(c));
}
*/
