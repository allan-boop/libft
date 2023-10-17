int ft_isalnum(int charac)
{
	if((charac < 48 || charac > 122) || (charac > 57 && charac < 65) || (charac > 90 && charac < 97))
{
	return 0;
}
	return 1;
}
