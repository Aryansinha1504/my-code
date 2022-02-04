#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
long long palindrome(long long num2,int n);
int main() {

// Given a number, in the form of an array Num[] of size N containing digits from 1 to 9(inclusive). The task is to find the next smallest palindrome strictly larger than the given number.

// Example 1:

// Input:
// N = 11
// Num[] = {9, 4, 1, 8, 7, 9, 7, 8, 3, 2, 2}
// Output: 9 4 1 8 8 0 8 8 1 4 9
// Explanation: Next smallest palindrome is
// 94188088149.
// Example 2:

// Input:
// N = 5
// Num[] = {2, 3, 5, 4, 5}
// Output: 2 3 6 3 2
// Explanation: Next smallest palindrome is
// 23632.
// return 0;
int n;long long num;
printf("enter the value of n\n");
scanf("%d",&n);
int a[n];
printf("start entering the elemnts\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
for(int i=0;i<n;i++)
{
    num+=(long long)a[i]*pow(10,n-i-1);                //converting the aray into a numebr
}
printf("the number in the variable is %d\n",num);

long long j=num;
while(0==0)
{
if(j==palindrome(j,n))  //finding nxt palindrome
{
  printf("next smallest palindrome %d\n",j);
   break;
}
j++;
}
}
long long palindrome(long long num2,int n) //reversing
{
    long long a;long long rev=0;int c=n;
    for(long long i=num2;i>0;i/=10)
    {
        a=i%10;
       rev=rev+a* pow(10,c-1);
       c--;              
    }
    return rev;
}