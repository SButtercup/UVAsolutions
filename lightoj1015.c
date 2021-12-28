#include<stdio.h>
int main()
{
    int std_no,test_case,k,sum,x;
    int dust[1000];
    while(scanf("%d",&test_case)==1)
    {
        for(k=1;k<=test_case;k++)
        {
            scanf("%d",&std_no);
            sum=0;
            while(std_no>0)
            {
                scanf("%d",&x);
                if(x>=0){
                    sum+=x;
                }
                std_no--;
            }
            printf("Case %d: %d\n",k,sum);
        }

    }

    return 0;

}
