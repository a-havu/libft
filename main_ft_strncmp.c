#include <stdio.h>
#include <string.h>

int main()
{
	const char s1[] = "Hello";
	const char s2[] = "Helloo";
	size_t n = 7;
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
}
