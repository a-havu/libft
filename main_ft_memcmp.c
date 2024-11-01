#include <string.h>
#include <stdio.h>

int main()
{
	char s1[] = "7890654";
	char s2[] = "789654";
	size_t n = 7;

	printf("memcmp: %d\n", memcmp(s1, s2, n));
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
}
