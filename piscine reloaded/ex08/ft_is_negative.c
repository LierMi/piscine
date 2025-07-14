#include <unistd.h>

// void	ft_is_negative(int n)
// {
// 	if (n < 0)
// 		write(1, "N", 1);
// 	else
// 		write(1, "P", 1);
// }

void	ft_is_negative(int n)
{
	char	c;

	c = (n < 0) ? 'N' : 'P';
	write(1, &c, 1);
}