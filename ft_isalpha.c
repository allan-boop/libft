int ft_isalpha(int charac)
{
	if((charac < 41 || charac > 122) || (charac > 90 && charac < 97))
	{
		return 0;
	}
	return 1;
}
