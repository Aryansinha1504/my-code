#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

// Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
// Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

// Example 1:

// Input: 
// n = 5 
// A[] = {1,3,5,2,2} 
// Output: 3 
// Explanation: For second test case 
// equilibrium point is at position 3 
// as elements before it (1+3) = 
// elements after it (2+2). 
 

// Example 2:

// Input:
// n = 1
// A[] = {1}
// Output: 1
// Explanation:
// Since its the only element hence
// its the only equilibrium point.
int n;
    int sum;
    printf("enter the size of array\n");
    scanf("%d", &n);

    int arr[n];
    int count = 0;
    printf("start entring the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
return 0;
}