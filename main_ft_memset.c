#include <stdio.h>
#include <string.h>

int main()
{
        int n = 5;
        char arr[] = "Hello goodbye";
        char arr2[] = "Hello goodbye 2";
        printf("Array before: ");
        printf("%s\n", arr);
        ft_memset(arr, '6', n);
        printf("Array after ft_memset():");
        printf("%s\n", arr);
        printf("Array after memset():");
        memset(arr2, '6', n);
        printf("%s\n", arr2);   
}

