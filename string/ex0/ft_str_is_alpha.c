/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:08:19 by akanaan           #+#    #+#             */
/*   Updated: 2025/11/04 19:53:04 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(((str[i] >= 'A') && (str[i] <= 'Z'))
				|| ((str[i] >= 'a') && (str[i] <= 'z'))))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char arr[]="gyghgjiehfu";
	printf("%d",ft_str_is_alpha(arr));
}
*/
