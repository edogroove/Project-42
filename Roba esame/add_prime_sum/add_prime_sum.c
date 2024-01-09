#include <unistd.h>

int	ft_atoi(char *str)
{
	int ris;
	int i;
	int segno;

	segno = 1;
	i = 0;
	ris = 0;
	if (str[i] == '-')
	{
		segno = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ris *= 10;
		ris += str[i] - '0';
		i++;
	}
	return (ris * segno);
}

int	ft_is_prime(int nbr)
{
	int	div;

	div = 2;
	while (div <= nbr / 2)
	{
		if (nbr % div == 0)
			return (0);
		div++;
	}
	return (1);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 0)
	{
		ft_putnbr(nbr / 10);
		c = nbr % 10 + '0';
		write(1, &c, 1);
	}
}

int	main(int argc, char **argv)
{
	int	sum;
	int n;

	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	n = ft_atoi(argv[1]);
	if (n <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	sum = 0;
	while (n > 1)
	{
		if(ft_is_prime(n))
			sum += n;
		n--;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
}