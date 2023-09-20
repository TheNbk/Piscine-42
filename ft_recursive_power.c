#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int result;
	
	result = nb;
	if (power < 0)
		return(0);
	else if (power == 0)
		return (1);
	else if (power > 0)
            return (nb * ft_recursive_power(nb, power -1));
    return (nb);
}

#include <stdio.h>
int     main()
{
    printf ("%d", ft_recursive_power(3, 8));
}
