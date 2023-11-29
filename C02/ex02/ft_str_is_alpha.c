/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:23:17 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/12 17:52:06 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;
	int	check;

	a = 0;
	check = 1;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a' && str[a] <= 'z')
			|| (str[a] >= 'A' && str[a] <= 'Z'))
			a++;
		else
		{
			check = 0;
			return (check);
		}
	}
	return (check);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "aaaaaa1aaaaBBBBa2aaa";
    
    ft_str_is_alpha(name);
    printf ("%d", ft_str_is_alpha(name));
    return (0);
}
*/
