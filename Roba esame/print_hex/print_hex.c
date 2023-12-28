#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	ris;

	i = 0;
	ris = 0;
	if (str[0] == '-')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			ris = ris * 10 + (str[i] - '0');
		else
			return (0);
		i++;
	}
	return (ris);
}


void	print_hex(int n)
{
	char *hex = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	n = n % 16;
	write(1, &hex[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}
