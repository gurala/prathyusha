#include<stdio.h>
void printodd(int a)
{
int i;
for(i=1;i<a+1;i++)
{
if(i%2!=0)
{
printf("%d",i);
printf(" ");
}
}
}
int main(){
int a;
printf("enter a value:");
scanf("%d",&a);
printodd(a);
}
