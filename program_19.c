#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    // printing pattern
    int m;
    printf("enter the order of array \n");
    scanf("%d", &m);
    int a[m][m];
    printf("start entering the array\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i][i] * a[i][i]);
    }

    printf("\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", (a[i][m - i - 1] * a[i][m - i - 1]));
    }
    return 0;
}
