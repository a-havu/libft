int main()
{
        char src[] = "Source";
        char dest[] = "Destination";
        char src2[] = "Source";
        char dest2[] = "Destination";

        size_t n = 7;

        printf("Before: %s, %s\n", src, dest);
        ft_memcpy(dest, src, n);
        printf("After ft_memcpy: %s, %s\n", src, dest);
        memcpy(dest2, src2, n);
        printf("After memcpy: %s, %s\n", src2, dest2);
}
