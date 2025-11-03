/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:21:15 by akanaan           #+#    #+#             */
/*   Updated: 2025/11/03 19:22:35 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		if (str[0] >= 97)
		{
			str[0] = str[0] -32;
			i++;
		}
		if ((str[i] <= 64) && (str[i] >= 33))
		{
			i++;
			if (str[i] == 32)
			{
				i++;
				if ((str[i] >= 97) && (str[i] <= 122))
				{
					str[i] = str[i] - 32 ;
				}
			}
		}
		if (str[i] == 32)
                        {
                                i++;
                                if ((str[i] >= 97) && (str[i] <= 122))
                                {
                                        str[i] = str[i] - 32 ;
                                }
                        }

		i++;
	}
	return (str);
}

int	main(void)
{
	char	arr[] = "hello, how are you doing? 42words forty-two; fifty+and+one";

	printf("%s", ft_strcapitalize(arr));
}
