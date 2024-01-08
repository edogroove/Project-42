int	ft_atoi(const char *str)
{
	int	i;
	int	ris;
	int	segno;

	i = 0;
	ris = 0;
	segno = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			segno *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		ris = ris * 10 + (str[i] - '0');
		i++;
	}
	return (segno * ris);

}
