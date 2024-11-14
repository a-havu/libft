int main()
{
	printf("atoi: %d\n", atoi("888k"));
	printf("ft_atoi: %d\n", ft_atoi("888k"));
	printf("atoi: %d\n", atoi("-888"));
	printf("ft_atoi: %d\n", ft_atoi("-888"));
	printf("atoi: %d\n", atoi("--888"));
	printf("ft_atoi: %d\n", ft_atoi("--888"));
	printf("atoi: %d\n", atoi("-+888"));
	printf("ft_atoi: %d\n", ft_atoi("-+888"));
	printf("atoi: %d\n", atoi("    888"));
	printf("ft_atoi: %d\n", ft_atoi("    888"));
	printf("atoi: %d\n", atoi("    +888"));
	printf("ft_atoi: %d\n", ft_atoi("    +888"));
	printf("atoi: %d\n", atoi("  hh  +888"));
	printf("ft_atoi: %d\n", ft_atoi("  hh  +888"));
}
