#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

int m=50,n=1;
for(int i=(m+n)/2;i>0;i=i/2)
{
    printf("%d\n",i);
}
return 0;
}