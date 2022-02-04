#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

char s[100];int hr;int hr2;
printf("enter the time\n");
gets(s);
hr =s[0];
hr2 =s[1];
int hrr=hr*10+hr2;
if(strchr(s,'P')||strchr(s,'p')!=0)
{
    if(hr2>=1<12)
    hrr+=12;
    if(hrr==12)
    hrr=00;
}
else
hrr=hrr;
s[0]=hrr/10;
s[1]=hrr%10;
printf("%s",s);


return 0;
}