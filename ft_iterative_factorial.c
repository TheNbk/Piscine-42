int        ft_iterative_factorial(int nb)
{
        int        result;
        int        i;

        i = 1;
        result = 1;
        if (nb <= 0)
                return (0);
        if (nb == 1)
                return (1);
        while (i <= nb)
        {
                result = i * result;
                i++;
        }
        return (result);
}

#include <stdio.h>
int     main()
{
    printf ("%d", ft_iterative_factorial(1));
}
