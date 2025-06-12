#include <stdio.h>

int main()
{
    
    int i,flag=0,NUM;
    printf("enter a number");
    scanf("%d",&NUM);
    for(i=2;i<NUM;i++){
        if(NUM%i==0){
            flag=1;
            break;
        }
    }    
    if(flag==0){
        printf("prime number");
    }else{
        printf("non prime number");
    }
    return 0;
}
