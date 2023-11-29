#include<stdio.h>
int main()
{
    int x,n,i,fact;
    printf("enter the number for factorial");
    scanf("%d",&x);
    n=1;
    for (i=1; i<=x;i++){
        n=n*i;
    }
    printf("the factorial is %d :",n);
}
