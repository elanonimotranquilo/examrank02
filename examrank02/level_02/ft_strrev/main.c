#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	temp;

	len = ft_strlen(str);
	i = 0;
	while (i < (len / 2))
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_strrev(argv[1]));
	return (0);
}
