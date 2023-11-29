/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:34:27 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/11 12:57:32 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] -= 32;
		}
		a++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	name[30] = "abcdefghijklmnopqrstuwvxz";

	ft_strupcase(name);
	printf("%s", ft_strupcase(name));
	return (0);
}
*/
