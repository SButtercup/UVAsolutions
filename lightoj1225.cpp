#include<stdio.h>
#include<string.h>
int main()
{
    char n[15];
    int r,d,n1[100],l,i,k;
    scanf("%d",&l);
    for(i=1;i<=l;i++)
        {
            scanf("%s",n);
            k=0;
            for(r=0,d=(strlen(n))-1;r<=strlen(n)/2;r++,d--)
                {
                    if(n[r]!=n[d]){
                        k=1;
                        printf("Case %d: No\n",i);
                        break;
                        }
                }
            if(k==0)
                printf("Case %d: Yes\n",i);
    }
    return 0;
}
