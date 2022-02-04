#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"sorting_header_file.h"
int main() {

// Given a sorted array A[] of size N, delete all the duplicates elements from A[].
// Note: Don't use set or HashMap to solve the problem.


// Example 1:

// Input:
// N = 5
// Array = {2, 2, 2, 2, 2}
// Output: 2
// Explanation: After removing all the duplicates 
// only one instance of 2 will remain.
// Example 2:

// Input:
// N = 3
// Array = {1, 2, 2}
// Output: 1 2 
int n;
    int c = 0;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int a[n];int b[n];   // b is the array having non duplicate elements
    printf("start entering the aray\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sorting(a,n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {                                                
              if(a[i]==a[j])
              {
                  c++;
              }
        }
       
        
    }

return 0;
}