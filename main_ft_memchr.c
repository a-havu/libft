#include <stdio.h>
#include <string.h>

int main()
{
	int c = '8';
    const char str[] = "kissa8";
	size_t n = 8;

    printf("memchr looks like this: %p\n", memchr(str, c, n));
	printf("ft_memchr looks like this: %p\n", ft_memchr(str, c, n));
}
