int main()
{
	char s[] = "\0";
	char *arr;
	arr = ft_strdup(s);
	printf("strdup: %s \n", strdup(s));
	printf("ft_strdup: %s\n", arr);
	free (arr);
	arr = 0;
	return (0);
}
