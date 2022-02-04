#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include "sorting_header_file.h"
int main() {

// Union of two arrays can be defined as the common and distinct elements in the two arrays.
// Given two sorted arrays of size n and m respectively, find their union.


// Example 1:

// Input: 
// n = 5, arr1[] = {1, 2, 3, 4, 5}  
// m = 3, arr2 [] = {1, 2, 3}
// Output: 1 2 3 4 5
// Explanation: Distinct elements including 
// both the arrays are: 1 2 3 4 5.
 

// Example 2:

// Input: 
// n = 5, arr1[] = {2, 2, 3, 4, 5}  
// m = 5, arr2[] = {1, 1, 2, 3, 4}
// Output: 1 2 3 4 5
// Explanation: Distinct elements including 
// both the arrays are: 1 2 3 4 5.
 

// Example 3:

// Input:
// n = 5, arr1[] = {1, 1, 1, 1, 1}
// m = 5, arr2[] = {2, 2, 2, 2, 2}
// Output: 1 2
// Explanation: Distinct elements including 
// both the arrays are: 1 2.

int m;
int n;
printf("enter the sizes of array\n");
scanf("%d %d",&m,&n);
int a1[m];
int a2[n];int c=0;
printf("start entering the array 1\n");
for(int i=0;i<m;i++)
{
    scanf("%d",&a1[i]);
}
sorting(a1,m);
printf("start enterig the arry 2\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&a2[i]);
}
sorting(a2,n);
if(m>n)
{
    for(int i=0;i<m;i++)
    {
        printf("%d ",a1[i]);
    }
    for(int i=0;i<n;i++)
    {c=0;
        for(int j=0;j<m;j++)
        {   if(a2[i]!=a1[j])
           c++;
           else break;
        }
        if(c==m)
        printf("%d ",a2[i]);
    }
}
else
{
    for(int i=0;i<n;i++)
    {c=0;
        printf("%d ",a2[i]);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {                                                       
           if(a1[i]!=a2[j])
           c++;
           else break;
        }
        if(c==n)
        printf("%d ",a2[i]);
    }
}
return 0;
}