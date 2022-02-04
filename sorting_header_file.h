#include <stdio.h>
void sorting(int *ptr,int size)
{int temp;

   for(int i=0;i<size;i++)
   {
       for(int j=0;j<size-i-1;j++)
       {
           if(*(ptr+j+1)< *(ptr+j))
              {
                  temp=*(ptr+j);
                  *(ptr+j)=*(ptr+j+1);
                  *(ptr+j+1)=temp;
              }
       }
   }
}