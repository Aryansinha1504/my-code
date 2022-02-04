#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

// Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 

 

// Example 1:

// Input:
// N = 5, D = 2
// arr[] = {1,2,3,4,5}
// Output: 3 4 5 1 2
// Explanation: 1 2 3 4 5  when rotated
// by 2 elements, it becomes 3 4 5 1 2.
int n;
printf("enter thenumber of elements\n");
scanf("%d",&n);
int a[n];
printf("start entering the aray\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=n-1;i>=0;i--)
    { if((i+2)>=n)
    {
       a[i]=a[n-i];
    }
    else
        a[i]=a[i+2];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
return 0;
}