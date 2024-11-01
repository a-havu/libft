#include <stdio.h>
#include <string.h>

int main()
{
    int c = 'o';
    const char str[] = "Laila kissa";

    printf("strchr looks like this: %s\n", strchr(str, c));
	printf("ft_strchr looks like this: %s\n", ft_strchr(str, c));

}
