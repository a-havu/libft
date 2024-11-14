int main()
{
        int n = 7;
        char arr[] = "abcdefghi";
        char arr2[] = "abcdefghi";
        printf("Array[4] before: ");
        printf("%c\n", arr[4]);
        printf("Array[4] after ft_bzero: ");
        ft_bzero(arr, n);
        printf("%c\n", arr[4]);
        printf("Array[4] after bzero: ");
        bzero(arr2, n);
        printf("%c\n", arr2[4]);
}
