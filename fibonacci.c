#include<stdio.h>

int main(void)
{
    long long a=0,b=1,c;
    int n,i;
    printf("fibonacci\n"); //Headding
    printf("Enter the value of integer n  : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        }

    return 0;
}