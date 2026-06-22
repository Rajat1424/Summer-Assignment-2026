#include <stdio.h>
int main()
{
    int n, i, j, k, duplicate;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are:\n");
    for(i = 0; i < n; i++)
    {
        duplicate = 0;
        for(k = 0; k < i; k++)
        {
            if(arr[i] == arr[k])
            {
                duplicate = 1;
                break;
            }
        }
        if(duplicate == 1)
            continue;
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}