/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:34:43 by akanaan           #+#    #+#             */
/*   Updated: 2025/11/04 19:53:54 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = str[i] - 32 ;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	arr[] = "osydojpjghsdouigsdgIYTYJJJFhnjsdnsgsl";

	printf("%s", ft_strupcase(arr));
}
*/
