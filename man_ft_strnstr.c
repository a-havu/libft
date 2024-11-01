int main()
{
	const char big[] = "laila";
	const char little[] = "il";
	size_t len = 9;

	printf("strnstr: %s\n", strnstr(big, little, len));
	printf("ft_strnstr: %s\n", ft_strnstr(big, little, len));
}
