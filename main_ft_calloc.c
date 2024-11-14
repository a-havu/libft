int main()
{
	size_t nmemb = 20;
	size_t size = 4;
	char *cal = calloc(nmemb, size);
	char *ft_cal = ft_calloc(nmemb, size);
	printf("calloc: %p\n", cal);
	printf("ft_calloc: %p\n", ft_cal);
	free(cal);
	free(ft_cal);
	return (0);
}
