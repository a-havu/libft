int main()
{
	char const s[] = "   Look    at    these     strings  hello hello  ";
	char c = ' ';
	char **result;

	result = ft_split(s, c);
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	printf("%s\n", result[3]);
	printf("%s\n", result[4]);
	printf("%s\n", result[5]);
	printf("%s\n", result[6]);
	return (0);
}
