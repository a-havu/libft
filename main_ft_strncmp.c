int main()
{
	const char s1[] = "Hello";
	const char s2[] = "Helloo";
	size_t n = 7;
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
	printf("test1: %d\n", ft_strncmp("zyxbcdefgh", "abcdwxyz", 4));
	printf("test1: %d\n", strncmp("zyxbcdefgh", "abcdwxyz", 4));
	printf("test2: %d\n", ft_strncmp("abcd", "abcde", 7));
	printf("test2: %d\n", strncmp("abcd", "abcde", 7));
	printf("test3: %d\n", ft_strncmp("test\200", "test\0", 6));
	printf("test3: %d\n", strncmp("test\200", "test\0", 6));
}
