#include <stdio.h>
#include <string.h>

int main()
{
    int c = 'x';
    const char str[] = "Backwards searching";

    printf("strrchr looks like this: %s\n", strrchr(str, c));
	printf("ft_strrchr looks like this: %s\n", ft_strrchr(str, c));

}
