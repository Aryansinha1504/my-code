#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int preserving(int a,int b);     //sum of preserving pair 
int sumdigit(int n);           // sum of sum of digits id equal to sum of digits of their sum
int main() {
int value;
for(int i=13;i<=23;i++)
{
   for(int j=i+1;j<=23;j++)
   {
       value =preserving(i,j);
       if(value ==1)
       {
           printf("preserving pair is %d %d \n",i,j);
       }
   }
}
return 0;
}
int preserving(int a,int b)
{int sum2;
    int sum=sumdigit(a)+sumdigit(b);
    sum2=a+b;
    if(sum==sumdigit(sum2))
    return 1;
    else return 0;
}
int sumdigit(int n)
{int sum=0;
    for(int i=n;i>0;i/=10)
    {
        sum=sum+i%10;
    }
    return sum;
}