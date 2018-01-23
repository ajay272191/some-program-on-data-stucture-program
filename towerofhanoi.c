#include<stdio.h>
void tower(int,char,char,char);
int main()
{
   int n;
   printf("enter the no of disks:");
   scanf("%d",&n);
   tower(n,'S','A','D');
}
void tower(int n,char sou,char aux,char des)
{
    if(n==1)
    printf("move disk from  %c to %c \n",sou,des);
    else
    {
       tower(n-1,sou,des,aux);
       tower(1,sou,aux,des);
       tower(n-1,aux,sou,des);
    }
}