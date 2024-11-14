int main()
{
    int c = 'o';
    const char str[] = "Laila kissa";

    printf("strchr: %s\n", strchr(str, c));
	printf("ft_strchr: %s\n", ft_strchr(str, c));

}
