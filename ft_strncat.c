char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int a;
    unsigned int b;
    
    a = 0;
    b = 0;
    while (dest[a] != '\0' && a < nb)
        a++;
    while (src[b] != '\0' && b < nb)
    {
            dest[a] = src[b];
            a++;
            b++;
    
    }
    dest[a] = '\0';
    return (dest);
    
}

#include <stdio.h>

int main()
{
    char dest[50] = "Bom dia ";
    char src[50] = "Equipe";
    
    printf ("%s" , ft_strncat(dest, src, 5));
}
