#include <stdio.h>
#include <string.h>

int main()
{
        char src[] = "Source";
        char dest[] = "Dest";
        char src2[] = "Source2";
        char dest2[] = "Dest2";

        size_t n = 2;

        printf("Before ft_memcpy: %s, %s\n", src, dest);
        ft_memcpy(dest, src, n);
        printf("After ft_memcpy: %s, %s\n", src, dest);
        memcpy(dest2, src2, n);
        printf("After memcpy: %s, %s\n", src2, dest2);
}

