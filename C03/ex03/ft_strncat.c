/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:08:55 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/17 14:21:31 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	i;
	unsigned int	count;

	count = 0;
	a = 0;
	i = 0;
	while (dest[a] != '\0')
		a++;
	while (src[i] != '\0' && count < nb)
	{
		dest[a] = src[i];
		i++;
		a++;
		count++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char	dest[] = "Arebaba";
	char	src[] = "Namaste";
	
	printf ("%s\n", ft_strncat(dest, src, 3));
}
*/
