#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

// Given an array of integers arr[] of length N, every element appears thrice except for one which occurs once.
// Find that element which occurs once.


// Example 1:

// Input:
// N = 4
// arr[] = {1, 10, 1, 1}
// Output:
// 10
// Explanation:
// 10 occurs once in the array while the other
// element 1 occurs thrice.
// Example 2:

// Input:
// N = 10
// arr[] = {3, 2, 1, 34, 34, 1, 2, 34, 2, 1}
// Output:
// 3
// Explanation:
// All elements except 3 occurs thrice in the array
int n;int count=0;
printf("enter thenumber of elements\n");
scanf("%d",&n);
int a[n];
printf("start entering the aray\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++)
    { count=0;
      for(int j=i+1;j<n;j++)
      {                                                       
          if(a[i]==a[j])
          count++;
          else continue;
      }
      if(count==0)
      {printf("the element not present in thrice is %d \n",a[i]);
      break;}
    }

return 0;
}