/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:05:30 by akanaan           #+#    #+#             */
/*   Updated: 2025/11/04 19:54:04 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' ) && (str[i] <= 'Z'))
		{
			str[i] = str[i] + 32 ;
		}
		i++;
	}
	return (str);
}
/*
int     main(void)
{
        char    arr[] = "osydojpjghZsdouigsdgIYTYJJJFhnjsdnsgsl";

        printf("%s", ft_strlowcase(arr));
}
*/
