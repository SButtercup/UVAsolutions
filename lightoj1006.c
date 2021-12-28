#include<stdio.h>
#define MD 10000007LL
int main()
{
    int cases,i,j,k;
    long long int num[100005],sum,n;
    while(scanf("%d",&cases)==1){
        for(i=1;i<=cases;i++)
        {
            sum=0;
            for(j=0;j<6;j++)
            {
                scanf("%lld",&num[j]);
                num[j]%=MD;
                sum=sum+num[j];
                sum%=MD;
            }
            scanf("%lld",&n);
            n%=MD;
            if(n<6)
            {
                for(j=0;j<6;j++)
                {
                    if(n==j){
                        sum=num[j]%MD;
                        continue;}
                }
            }
            else
            {
                k=6;
                num[k]=sum;
                j=0;
                k++;
                while(k<=n)
                {
                    sum=(sum+(sum-num[j]+MD)%MD)%MD;
                    j++;
                    num[k]=sum%MD;
                    k++;
                }
            }
            printf("Case %d: %lld\n",i,sum%MD);
        }
    }
    return 0;
}
