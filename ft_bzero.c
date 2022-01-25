// https://stackoverflow.com/questions/17096990/why-use-bzero-over-memset

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *p;

    p = s;
    while (n--)
    {
        *p = '\0';
        p++;
    }
}


/*
TESTING
*/

/*
#define SIZE_ARRAY 5

//function to print char of an char array
void printArray(char arr[], int n)
{
    int i =0;
    for (i=0; i<n; i++)
    {
        printf("%c\n", arr[i]);
    }
}
int main()
{
    char arr[SIZE_ARRAY] = "ABCD";
    // Print Array before calling memset
    printArray(arr,SIZE_ARRAY);
    //Calling own created memset
    ft_bzero(arr, sizeof(arr));
    // Print Array After calling memset
    printArray(arr,SIZE_ARRAY);
    return 0;
}

*/