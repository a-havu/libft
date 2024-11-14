static char	ft_toa(unsigned int i, char a)
{
	if ((a == 'e' || a == 'i' || a == 'o'\
	|| a == 'a' || a == 'u' || a == 'y') && i)
		a = 'A';
	return (a);
}

int main()
{
	char const *s = "Hello my name is Aino";
	printf("strmapi: %s\n", ft_strmapi(s, ft_toa));
}
