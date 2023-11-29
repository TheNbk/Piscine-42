/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:04:39 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/13 22:28:03 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	flag;

	flag = 1;
	a = 0;
	while (str[a] >= 'A' && str[a] <= 'Z')
		{	a++;
			str[a] += 32;
		}
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z' && flag == 1)
		{
			str[a] -= 32;
			flag = 0;
		}
		if (str[a] >= 32 && str[a] <= 47 && flag == 0
			|| (str[a] >= 48 && str[a] <= 57)
			|| (str[a] >= 58 && str[a] <= 64)
			|| (str[a] >= 91 && str[a] <= 96)
			|| (str[a] >= 123 && str[a] <= 126))
			flag = 1;
		a++;
	}		
	return (str);
}

#include <stdio.h>

int	main()
{
	char	name[100] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(name);
	printf ("%s", name);
	return (0);
}

