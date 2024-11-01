#include <stdio.h>
#include <string.h>

int main()
{
        //char dest[] = "xxxxxxxxx";
		char src2[] = "abcdef";
        //char dest2[] = "xxxxxxxxx";
		char src[] = "abcdef";

        size_t n = 15;
		//printf("The difference between the addresses is: %ld\n", (dest - src));
        memmove(src + 2, src, n);
        printf("memmove looks like this: %s, %s\n", (src + 2), src);
        ft_memmove(src2 + 2, src2, n);
    	printf("ft_memmove looks like this: %s, %s\n", (src2 + 2), src2);
}
