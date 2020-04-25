#include<stdio.h>
int main(){
int a,b,c;
char s;
printf("enter the operation:");
scanf("%c",s);
printf("enter a and b values:");
scanf("%d %d",&a,&b);
switch(s)
{
case '+':
       c=a+b;
       printf("c=%d\n",c);
       break;
case '-':
       c=a-b;
       printf("c=%d\n",c);
       break;
case '*':
      c=a*b;
      printf("c=%d\n",c);
      break;
case '/':
     c=a/b;
     printf("c=%d\n",c);
     break;
default:
     printf("error\n");
     break;
    } 
    }
       
       
       
