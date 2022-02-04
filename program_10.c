#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

// Example 1:

// Input:
// N = 5
// A[] = {1,2,3,5}
// Output: 4
// Example 2:

// Input:
// N = 10
// A[] = {6,1,2,8,3,4,7,10,5}
// Output: 9
int n;int fake_varible;int c=0;
printf("enter the value of n\n");
scanf("%d",&n);
int a[n-1];
printf("start entering the array\n");
for(int i=0;i<n-1;i++)
{
    scanf("%d",&fake_varible);

    if( fake_varible>=1 && fake_varible<=n)
    a[i]= fake_varible;
}
for(int j=1;j<=n;j++)
{c=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==j)
        break;
        else
       { 
       c++;
       continue;}

    }
    if(c==n-1)
    {printf("missing number is %d\n",j);
    break;}
}
return 0;
}