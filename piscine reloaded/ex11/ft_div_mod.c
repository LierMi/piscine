#include <unistd.h>

// void	ft_div_mod(int a, int b, int *div, int *mod)
// {
// 	if (b != 0)
// 	{
// 		*div = a / b;
// 		*mod = a % b;
// 	}
// }


// #include <limits.h>

// int	ft_iterative_factorial(int nb)
// {
// 	int	result;

// 	result = 1;
// 	if (nb < 0 || nb > 12)
// 		return 0;
// 	while (nb > 0)
// 	{
// 		result *= nb;
// 		nb--;
// 	}
// 	return result;
// }


// int	ft_recursive_factorial(int nb)
// {
// 	if (nb < 0 || nb > 12)
// 		return 0;
// 	if (nb == 0 || nb == 1)
// 		return 1;
// 	return nb * ft_recursive_factorial(nb - 1);
// }


// int	ft_sqrt(int nb)
// {
// 	if (nb < 0)
// 		return 0;
// 	int	i;

// 	i = 1;
// 	while (i < nb / i)
// 		i++;
// 	if (i * i == nb)
// 		return i;
// 	else
// 		return 0;
// }



void	ft_putstr(char *str)
{
	
}