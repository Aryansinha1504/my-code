#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sum=0,n,m,k;                       //dhruv program

    printf("Enter the rows and column of matrix:\n");
    scanf("%d %d",&n,&m);
    int max[n];
    int arr[n][m];
    int index[n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&arr[i][j]);

            max[i]=0;
    }


    for(j=0;j<m;j++)
    {
        if(arr[0][j]>=max[0])
            {
            max[0]= arr[0][j];
            index[0]=j;
            }
    }

    for(k=0;k<n-1;k++)
    {

      for(j=index[k]-1;j<=index[k]+1;j++)
       {
         if(arr[k+1][j]>=max[k+1])
            {
              max[k+1]= arr[k+1][j];
              index[k+1]=j;
            }
       }
    }

     for(i=0;i<n;i++)
     {
       sum = sum + max[i];
     }


    printf("\n%d\n",sum);
    return 0;
}