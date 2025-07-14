#include <unistd.h>

// void	ft_print_number(void)
// {
// 	write(1, "0123456789\n", 11);
// }

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		ft_putchar(i + 48);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return 0;
}