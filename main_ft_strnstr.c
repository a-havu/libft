#include <bsd/string.h>
int main()
{
	const char big[] = "Laila the cat";
	const char little[] = "il";
	size_t len = 9;

	printf("strnstr: %s\n", strnstr(big, little, len));
	printf("ft_strnstr: %s\n", ft_strnstr(big, little, len));
}
