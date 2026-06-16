#include <stdio.h>
int main()
{
    int arr[11] = {1, 1, 2, 4, 4, 5, 6, 1, 1, 2, 2};
    int maxFreq = 0, freq, i, element;

    for (i = 0; i < 11; i++)
    {
        freq = 0;
        for (int j = 0; j < 11; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq > maxFreq)
        {
            maxFreq = freq;
            element = arr[i];
        }
    }
    printf("The element with Maximum frequency is %d and its frequency is %d", element, maxFreq);
}
