#include <stdio.h>

int main()
{
    int a[100];
    int i,limit;
    printf("enter array limit");
    scanf("%d",&limit);
    printf("enter values");
    for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
    }
    printf("entered values are:");
    for(i=0;i<5;i++){
    printf("%d\t",a[i]);
    }
    
    return 0;
}
