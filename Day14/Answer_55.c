#include <stdio.h>
#include <limits.h>
int main()
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    if(n < 2)
    {
        printf("Second largest element does not exist.");
        return 0;
    }
    int arr[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest = INT_MIN;
    int second = INT_MIN;
    for(i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    if(second == INT_MIN)
        printf("Second largest element does not exist.");
    else
        printf("Second largest element = %d", second);

    return 0;
}