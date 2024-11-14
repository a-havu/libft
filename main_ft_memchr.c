int main()
{
	int c = 's';
    const char str[] = "kissa";
	size_t n = 1;

    printf("memchr: %p\n", memchr(str, c, n));
	printf("ft_memchr: %p\n", ft_memchr(str, c, n));
}
