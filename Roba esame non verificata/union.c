#include <unistd.h>

int	controllo_doppie(char *s, int nlunghezza, char c)
{
	int i;
	
	i = 0;
	while (i < nlunghezza)
	{
		if (s[i] == c)
			return 0;
		i++;
	}
	return 1;
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (controllo_doppie(s1, i, s1[i]) == 1)
			write (1, &s1[i], 1);
		i++;
	}
	while (s2[j])
	{
		if (controllo_doppie(s1, i, s2[j]) == 1 && controllo_doppie(s2, j, s2[j]) == 1)
			write (1, &s2[j], 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write (1, "\n", 1);
	return 0;
}
