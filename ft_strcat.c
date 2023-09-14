int ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
	    dest[i] = src[j];
	    i++;
	    j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int main()
{
    char dest[50] = "Bom dia\n";
    char src[50] = "Equipe";
    
    printf ("%s", ft_strcat(dest, src));
}
