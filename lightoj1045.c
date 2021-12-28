#include<stdio.h>
#include<math.h>
#include<stdlib.h>
long no,i,d,res;
int test,k;
double arr[1000010];

int main()
{

    arr[0]=0.0;
    for(i=1;i<=1000000;i++)
    {
        arr[i]=log(i)+arr[i-1];
    }
    scanf("%d",&test);
    for(k=1;k<=test;k++)
    {

        scanf("%ld %ld",&no,&d);
        if(d<2)
            continue;
        res=(long)(arr[no]/log(d))+1;
        printf("Case :%d %ld\n",k,res);
    }

    return 0;
}
