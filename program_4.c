#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

// Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

 

// Example 1:

// Input:
// N = 5, S = 12
// A[] = {1,2,3,7,5}
// Output: 2 4
// Explanation: The sum of elements 
// from 2nd position to 4th position 
// is 12.
 

// Example 2:

// Input:
// N = 10, S = 15
// A[] = {1,2,3,4,5,6,7,8,9,10}
// Output: 1 5
// Explanation: The sum of elements 
// from 1st position to 5th position
// is 15
int n;
   
   printf("enter the size of array\n");
    scanf("%d", &n);int sum=0;

    

    int arr[n];int lower,upper;
    int count = 0;
    printf("start entring the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int S;
    printf("enter the sum u want up to which subaray to be obtained\n");
    scanf("%d",S);
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
         {
             count++;
             sum+=arr[j];
         }
         
         if(sum==S)
        {lower=i;
        upper=count;
            printf("%d %d",lower,upper);          
        }
    }
return 0;
}