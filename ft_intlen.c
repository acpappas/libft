int	ft_intlen(int nbr)
{
	int i;
	
	i = 0;

if (nbr < 0)
{
	nbr *= -1;
	i++;
}
while (nbr != 0)
{
	nbr /= 10;
	i++;
}
return (i);
}
