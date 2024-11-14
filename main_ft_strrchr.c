int main()
{
    int c = 'c';
    const char str[] = "Backwards searching";

    printf("strrchr: %s\n", strrchr(str, c));
	printf("ft_strrchr: %s\n", ft_strrchr(str, c));

}
