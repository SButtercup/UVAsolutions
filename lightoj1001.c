#include<stdio.h>
int main()
{
    unsigned int test,no,i;
    while(scanf("%u",&test)==1&&test<=25){
        for(i=1;i<=test;i++)
        {
            scanf("%u",&no);
            if(no==0)
                printf("0 0\n");
            else if(no<10)
                printf("%u %u\n",no-1,1);
            else if(no<=20)
                printf("%u %u\n",10,no-10);
            else
                continue;
        }
    }
    return 0;
}
