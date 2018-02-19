#include<stdio.h>
int main()
{
int i,n;
printf("\nenter the initial number:");
scanf("%d",&i);
printf("\nenter the final number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(i%2==0)
{
printf("\nthe even number is:%d",i);
}
else
{
printf("\n");
}
}
return 0;
}
