#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{

    // Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero.

    // Example 1:

    // Input: n = 5, arr[] = {0, -1, 2, -3, 1}
    // Output: 1
    // Explanation: 0, -1 and 1 forms a triplet
    // with sum equal to 0.
    // Example 2:

    // Input: n = 3, arr[] = {1, 2, 3}
    // Output: 0
    // // Explanation: No triplet with zero sum exists.
    int n;
    int sum;
    printf("enter the size of array\n");
    scanf("%d", &n);

    int arr[n];
    int count = 0;
    printf("start entring the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if (sum == 0)
                    count++;
            }
        }
    }
    printf("number of triplets is %d \n",count);
    return 0;
}