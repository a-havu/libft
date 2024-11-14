
int main()
{
	char const s[] = "Laila the cat loves to nap";
	unsigned int start = 3;
	size_t len = 20;

	printf("Result of ft_substr: %s\n", ft_substr(s, start, len));
	free (s);
	return(0);
}
