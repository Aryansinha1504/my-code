#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{                                        //counting duplicate elements in a array
    int n;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int flag=0;    //for counting the number of common elemnts
    int arr[n];
    int count = 0;
    printf("start entring the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n\n\n");
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > 1)
            {
                flag++;
                printf("%d\n", arr[i]);
            }
        else
            continue;
    }
    if(flag==0)
    printf("-1");
    return 0;
}