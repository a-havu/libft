#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char dst[] = "Destination";
	char str[] = "Laila";
	size_t size = 4;

	printf("strlcpy copied '%s' to '%s', length is %ld\n", str, dst, strlcpy(dst, str, size));
	printf("ft_strlcpy copied '%s' to '%s', length is %ld\n", str, dst, ft_strlcpy(dst, str, size));
}
