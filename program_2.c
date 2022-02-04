#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

// Given a sorted array containing only 0s and 1s, find the transition point. 


// Example 1:

// Input:
// N = 5
// arr[] = {0,0,0,1,1}
// Output: 3
// Explanation: index 3 is the transition 
// point where 1 begins.

// Example 2:

// Input:
// N = 4
// arr[] = {0,0,0,0}
// Output: -1
// Explanation: Since, there is no "1",
// the answer is -1.
int n;
printf("enter t0 size of array\n");
scanf("%d",&n);
int flag;                //keeps check on whether we have atleast one 1 in array or not
int a[n];
printf("start entring the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("transition pt is\n");
 for(int i=0;i<n;i++)
 {
     if(a[i]==1)
     {
         printf("%d",i);
         flag=1;5
         break;
     }
 }
 if(flag==0)
 printf("-1");
return 0;
}