static void	ft_too(unsigned int i, char *s)
{
	(void)i;
	if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'y')
	{
		*s = 'O';
	}
}

int main()
{
	char s[] = "Hello my name is Aino";
	ft_striteri(s, ft_too);
	printf("ft_striteri: %s", s);
	return (0);
}
