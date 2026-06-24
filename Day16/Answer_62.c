#include <stdio.h>
int main()
{
    int n, i, j;
    int maxfreq = 0, freq, element;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < n; i++)
    {
        freq = 1;
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
                freq++;
        }
        if(freq > maxfreq)
        {
            maxfreq = freq;
            element = arr[i];
        }
    }
    printf("Maximum frequency element = %d\n", element);
    printf("Frequency = %d\n", maxfreq);
    return 0;
}