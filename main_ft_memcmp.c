int main()
{
	char s1[] = "12345";
	char s2[] = "12344";
	size_t n = 7;

	printf("memcmp: %d\n", memcmp(s1, s2, n));
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
}
