int main()
{
	char s[] = "Laila is a cat";
	char *arr;
	arr = ft_strdup(s);
	printf("strdup: %s\n", strdup(s));
	printf("ft_strdup: %s\n", arr);
	free (arr);
	arr = 0;
	return (0);
}
