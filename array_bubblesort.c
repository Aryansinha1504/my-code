#include<stdio.h>

#include<math.h>   //bubble sorting decsenidng order

int main() {
 int n;
    printf("enter the length of array\n");
    scanf("%d", &n);
    int a[n];
    printf("start filling the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]>a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
for(int i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}