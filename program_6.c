#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

// Given an N bit binary number, find the 1's complement of the number. The ones' complement of a binary number is defined as the value obtained by inverting all the bits in the binary representation of the number (swapping 0s for 1s and vice versa).
 

// Example 1:

// Input:
// N = 3
// S = 101
// Output:
// 010
// Explanation:
// We get the output by converting 1's in S
// to 0 and 0s to 1
int n;
printf("eneter the number of bits u want\n");
scanf("%d",&n);
int s;
printf("enter the binary number\n");
scanf("%d",&s);
int a[n];
for(int i=0;i<n;i++)
{
    a[i]=(int)(s/pow(10,n-i-1));
    s=(s%(int)pow(10,n-i-1));
    printf("%d\n",a[i]);
}
for(int i=0;i<n;i++)
{
    if(a[i]==0)
    a[i]=1;
    else
    a[i]=0;
}
for(int i=0;i<n;i++)
{
    printf("%d",a[i]);
}
return 0;
}