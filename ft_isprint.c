int ft_isprint(int charac)
{
	if (charac >= 32 && charac < 127)
	{
		return 1;
	}
	return 0;
}
