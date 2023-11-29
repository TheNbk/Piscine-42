/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:31:57 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/12 17:48:11 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{	
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char src[20] = "chayashi";
	char dest[20] = ""; 
	unsigned int	a = 7;
		
	dest[19] = *ft_strncpy(dest, src, a);
	ft_strncpy(dest, src, a);
	printf ("A copia e: %s", dest);
	return (0);
}
*/
