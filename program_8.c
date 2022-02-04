#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "sorting_header_file.h"
int main()
{

    // You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

    // Example 1:

    // Input:
    // N = 5
    // arr[] = {1,2,3,4,5}
    // Output: 6
    // Explanation: Smallest positive missing
    // number is 6.
    // Example 2:

    // Input:
    // N = 5
    // arr[] = {0,-10,1,3,-20}
    // Output: 2
    // Explanation: Smallest positive missing
    // number is 2.
    int n;
    int c = 0;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int a[n];
    printf("start entering the aray\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sorting(a, n);
    for (int i = 1; i <= a[n - 1]; i++)
    {
        c = 0;
        for (int j = 0; j < n; j++)
        {
            
                if (a[j] != i)
                {
                    c++;
                    continue;
                }
                else
                    break;
            
        }
            if (c == n)
            {
                printf("the smalllest missing number is %d\n", i);
                break;
            }
        }
        return 0;
    }