#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
int n;int sum=0;int sumcheck=0;
printf("enter the size of array \n");
scanf("%d",&n);
printf("st;art entering the array \n");
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
sum=a[0];sumcheck=sum;
for(int i=1;i<n;i++)
{
    sumcheck+=a[i];
    sum=sumcalc(sumcheck,sum);
//     if(sum<sumcheck)
//     {
//         sum=sumcheck;
//     }
//     else
//     break;
// }
return 0;
}
int sumcalc(int j,int k)
{
    if(j>k)
    k=j;
    return k;
}