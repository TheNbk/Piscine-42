#include <stdio.h>
#include <unistd.h>

int	ft_interative_power(int nb, int power)
{
	int result;
	int i;
	
	result = nb;
	i = 1;
	if(power == 0)
		return(1);
	if(power < 0)
		return(0);
	while (i < power)
    {
        result = result * nb;
        i++;
    }
	return (result);
}

#include <stdio.h>
int     main()
{
    printf ("%d", ft_interative_power(3, 3));
}
