#include<stdio.h>
int main()
{
    int a1,b1,a2,b2,x,y,i,l,m;
    while(scanf("%d",&l)==1)
    {
        for(i=1;i<=l;i++)
        {
            printf("Case %d:\n",i);
            scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
            scanf("%d",&m);
            while(m>0)
            {
                scanf("%d%d",&x,&y);
                if(x>a1&&x<a2&&y>b1&&y<b2)
                {
                    printf("Yes\n");
                }
                else
                {
                    printf("No\n");
                }
                m--;
            }
        }
    }
    return 0;
}
