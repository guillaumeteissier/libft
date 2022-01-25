// https://aticleworld.com/memset-in-c/
// https://github.com/Smattr/memset

#include "libft.h"

void *ft_memset(void* s, int c, size_t n)
{
    unsigned char *p;

    p = s;
    while (n--)
    {
        *p = (unsigned char)c;
        p++;
    }
    return (s);
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
    ft_memset(arr,'0', sizeof(arr));
    // Print Array After calling memset
    printArray(arr,SIZE_ARRAY);
    return 0;
}
*/