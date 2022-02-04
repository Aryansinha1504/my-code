#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

int n,m;
printf("enter rows and columns \n");
scanf("%d %d",&n,&m);
int a [n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(int k=0;k<n;k++)
{
    leftright(n,a[k],k);
    topbottom(n,&a[1][n-k-1],k);
}
return 0;
}
void leftright(int m,int *ptr,int l)
{
    for(int i=0;i<m-l-1;i++)
    {
        printf("%d",ptr[i+l]);
    }
}
void topbottom(int m,int *ptr,int l)
{
    for(int i=0;i<m-l-1;i++)
    {
        printf("%d",ptr[l+4*i]);
    }
}