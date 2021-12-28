#include<stdio.h>
#include<string.h>
int main()
{
    char a[12];
    int test,j,k,f,n,i;
    scanf("%d",&test);
    for(k=1;k<=test;k++)
        {
            scanf("%s",a);
            f=0;
            n=strlen(a);
            for(i=0,j=n-1;i<n/2;i++,j--)
                {
                     if(a[i]!=a[j])
                     {
                         f=1;
                         printf("Case %d: No\n",k);
                         break;
                     }
                }
              if(f==0)
                printf("Case %d: Yes\n",k);
              }
        return 0;

        }
