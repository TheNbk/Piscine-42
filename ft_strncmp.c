#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] == s2[i] && (i < n - 1) && s1[i])
	{
		i++;
	}
	while (s1[i] && s2[i] != '\0')
	    i++;
	return (s1[i] - s2[i]);
}

int main()
{
    char name[] = "Riachuelo";
    char name1[] = "";
    
    printf ("%d\n", ft_strncmp (name, name1, 10));
    printf ("%d\n", ft_strncmp (name, name1, 0));
}
