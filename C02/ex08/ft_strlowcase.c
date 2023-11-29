/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:58:30 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/11 13:03:31 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	name[30] = "ABCDEFGHIJKLMNOPQRSTUWVXZ";

	ft_strlowcase(name);
	printf("%s", ft_strlowcase(name));
	return (0);
}
*/
