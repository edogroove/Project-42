#include <unistd.h>

void	wdmatch(char *str1, char *str2)
{
	int	len;
	int	i1;
	int	i2;
	
	len = 0;
	i1 = 0;
	i2 = 0;
	while (str1[len])
		len++;

	while (i1 < len && str2[i2])
	{
		if (str1[i1] == str2[i2])
		{
			i1++;
		}
		i2++;
	}

	if (i1 == len)
	{
		write(1, str1, len);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		wdmatch(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return 0;
}
