#include<stdio.h>

int fibonacci(int l)
{
int fibo[l+2];
fibo[0]=0;
fibo[1]=1;
for(int i=2;i<=l;i++)
    fibo[i]=(fibo[i-1]+fibo[i-2]);
 for(int i=0;i<l;i++)
        printf("%d ",fibo[i]);
}
int main()
{
    int limit;
    scanf("%d",&limit);
    fibonacci(limit);
    return 0;
}
