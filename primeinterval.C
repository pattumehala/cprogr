#include<stdio.h>
int main()
{
int low,high,count,i;
printf("Enter the two numbwrs(intervals):");
scanf("%d%d",&low,&high);
printf("Prime number between %d and %d are:",low,high);
while(low<high)
{
count=0;
for(i=2;i<=low/2;++i)
{
if(low%i==0)
{
count=1;
break;
}
}
if(count==0)
printf("%d",low);
++low;
}
return 0;
}
