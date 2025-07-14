#include <unistd.h>

int	repeat_alpha(char c)
{
	int	re;

	if (c >= 'a' && c <= 'z')
		re = (c - 'a' + 1);
	else if (c >= 'A' && c <= 'Z')
		re = (c - 'A' + 1);
	else
		re = 1;
	return (re);
}

int	main(int argc, char **argv)
{
	int	re;

	if (argc == 2)
	{
		while (*argv[1])
		{
			re = repeat_alpha(*argv[1]);
			while (re--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, '\n', 1);
}