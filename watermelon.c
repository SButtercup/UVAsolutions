#include<stdio.h>
int main()
{
    int w;
    while(scanf("%d",&w)==1&&(w<101||w>0))
    {
        if(w%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
