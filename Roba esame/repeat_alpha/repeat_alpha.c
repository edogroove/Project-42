#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i;
		int	c;
		int	lettera;
		int	w;

		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				lettera = 65;
				c = 1;
				while (lettera != argv[1][i])
				{
					c++;
					lettera++;
				}
				w = 0;
				while (w < c)
				{
					write(1, &argv[1][i], 1);
					w++;
				}
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				lettera = 97;
				c = 1;
				while (lettera != argv[1][i])
				{
					c++;
					lettera++;
				}
				w = 0;
				while (w < c)
				{
					write(1, &argv[1][i], 1);
					w++;
				}
			}
			else write(1, &argv[1][i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
}
