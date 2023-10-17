int ft_isdigit(int charac)
{
	if (charac < 48 || charac > 57)
	{
		return 0;
	}
	return 1;
}
