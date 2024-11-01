int main()
{
        int n = 7;
        char arr[] = "Hello goodbye";
        char arr2[] = "Hello goodbye";
        printf("Array[7] before: ");
        printf("%c\n", arr[7]);
        printf("Array[7] after ft_bzero: ");
        ft_bzero(arr, n);
        printf("%c\n", arr[7]);
        printf("Array[7] after bzero: ");
        bzero(arr2, n);
        printf("%c\n", arr2[7]);
}
