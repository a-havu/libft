int main()
{
        size_t n = 5;
        char *arr = (char *)malloc(n);
        char *arr2 = (char *)malloc(n);
        printf("ft_memset: %s\n", (char *)ft_memset(arr, 'c', n));
		printf("memset: %s\n", (char *)memset(arr2, 'c', n));
		free(arr);
		free(arr2);
}
