#include <bsd/string.h>
int main()
{
    char dst[25] = "Destination";
    const char src[] = "Source";
    char dst2[25] = "Destination";
    const char src2[] = "Source";
    size_t size = 7;

    int result2 = ft_strlcat(dst2, src2, size);
    int result1 = strlcat(dst, src, size);

    printf("ft_strlcat concatenated '%s' to '%s' with size %zu, the string cat tried to create: %d\n", src2, dst2, size, result2);
    printf("strlcat concatenated '%s' to '%s' with size %zu, the string cat tried to create: %d\n", src, dst, size, result1);
}
