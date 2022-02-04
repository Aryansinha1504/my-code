#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

int m;
printf("enter the order of array \n");
scanf("%d",&m);
int a[m][m];
printf("start entering the array\n");
for(int i=0;i<m;i++)
{
    for(int j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(int i=0;i<m;i++)
{
    for(int j=0;j<m;j++)
    {
        if(i==j)
        printf("%d",a[i][j]*a[i][j]);
    }
}
printf("\n");
for(int i=0;i<m;i++)
{
    for(int j=0;j<m;j++)
    {
        if(i+j==m-1)
        printf("&d",a[i][j]*a[i][j]);
    }
}
return 0;
}