#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len;

	if (argc > 1)
	{
		len = 0;
		while (argv[argc - 1][len])
		{
			len++;
		}
		write(1, argv[argc - 1], len);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1)
	}
	return (0);
}