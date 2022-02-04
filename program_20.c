#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
// Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
 

// Example 1:

// Input:
// N = 3 
// A[] = {1,2,3} 
// Output:
// -1
// Explanation:
// Since, each element in 
// {1,2,3} appears only once so there 
// is no majority element.
// Example 2:

// Input:
// N = 5 
// A[] = {3,1,3,3,2} 
// Output:
// 3
// Explanation:
// Since, 3 is present more
// than N/2 times, so it is 
// the majority element.
    int n;
    int count = 0;
    int flag = 0;
    printf("enter the size of array \n");
    scanf("%d", &n);
    int a[n];
    printf("start entering the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;flag=0;
        for (int j = i; j < n; j++)
        {
            if (a[j] == a[i])
                flag++;
        }
        if (flag > n / 2)
        {
            printf("major is %d", a[i]);
            count++;
            break;
        }
        else
            continue;
    }
    if(count==0)
    printf("-1");
    return 0;
}