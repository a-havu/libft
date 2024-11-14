int main()
{
	char src[] = "Source";
    char dest[] = "Destination";
	char src2[] = "Source";
    char dest2[] = "Destination";

    size_t n = 4;
	printf("The difference between the addresses is: %ld\n", (dest - src));
	printf("Before: %s, %s\n", dest, src);
    memmove(dest, src, n);
    printf("memmove looks like this: %s, %s\n", dest, src);
    ft_memmove(dest2, src2, n);
    printf("ft_memmove looks like this: %s, %s\n", dest2, src2);
}
