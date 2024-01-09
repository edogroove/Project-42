#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	sar(char *str, char *letter, char *repl)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (letter[0] == str[i])
		{
			str[i] = repl[0];
		}
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			sar(argv[1], argv[2], argv[3]);
		}
	}
	write (1, "\n", 1);
	return (0);
}
