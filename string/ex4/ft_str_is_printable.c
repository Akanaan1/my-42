/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanaan <akanaan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:24:48 by akanaan           #+#    #+#             */
/*   Updated: 2025/11/04 19:53:46 by akanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32) && (str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	arr[]="jkfjyh-:FLDSKVDSV>V?XZ>LWOI)#68-P+[€4bjhbuguy";

	printf("%d", ft_str_is_printable(arr));
}
*/
