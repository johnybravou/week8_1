#include<stdio.h>
int main()
{
    int a,b,c,d,i=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a%2==0)
    {
        ++i;
    }
    if(b%2==0)
    {
        ++i;
    }
    if(c%2==0)
    {
        ++i;
    }
    if(d%2==0)
    {
        ++i;
    }
    printf("%d",i);
return 0;
}