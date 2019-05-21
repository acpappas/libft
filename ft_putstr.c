void	ft_putchar(char c);

void	ft_putstr(char const *s)
{
	int i;

	while(i != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	return 0;
}
