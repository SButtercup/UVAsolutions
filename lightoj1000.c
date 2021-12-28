#include<stdio.h>
int main()
{
    unsigned int no1,no2,cases,i;
    while(scanf("%u",&cases)==1)
    {
        for(i=1;i<=cases;i++)
        {
            scanf("%u%u",&no1,&no2);
            if(no1<=10&&no2<=10)
            {
                printf("Case %u: %u\n",i,no1+no2);
            }
        }
    }
    return 0;
}
