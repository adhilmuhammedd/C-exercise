#include <stdio.h>
int sum();
int main()
{
    int k;
    k=sum();
    printf("result is:%d",k);

    return 0;
}
int sum()
{
    int a,b,c;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
    
}
