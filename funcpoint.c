#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int main()
{
    int result1,result2;
    int (*ptr)(int,int)=NULL;
    ptr=add;
    result1=ptr(30,30);
    printf("%d\n",result1);
    ptr=sub;
    result2=ptr(20,50);
     printf("%d",result2);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return abs(a-b);
}
