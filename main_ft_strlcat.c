#include <stdio.h>
#include <bsd/string.h>


int main()
{
    char dst[15] = "Laila";
    const char src[] = "kissa";
    char dst2[15] = "Laila";
    const char src2[] = "kissa";
    size_t size = 7;

    int result1 = strlcat(dst, src, size);
    int result2 = ft_strlcat(dst2, src2, size);

    printf("strlcat concatenated '%s' to '%s', the buffer size is: %d\n", src, dst, result1);
    printf("ft_strlcat concatenated '%s' to '%s', the buffer size is: %d\n", src2, dst2, result2);
}
