/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:33:57 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/16 15:45:29 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			while (to_find[i] && str[i] == to_find[i])
			{
				i++;
			}
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char *str = "Boa noite, tropa da 42!";
	char *to_find = ",";

	printf ("%s\n", ft_strstr(str, to_find));
	printf ("%s\n", strstr(str, to_find));
}
*/
