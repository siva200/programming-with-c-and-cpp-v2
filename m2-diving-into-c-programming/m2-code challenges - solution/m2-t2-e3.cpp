#include<stdio.h>
int main()
{

int n; 
long sum =0;
puts("enter the number ");
scanf("%d",&n);
for(int i =1;i<= n;i++)
{ sum =sum+(i*i);
printf("%ld",sum); 
}
return 0;
}
