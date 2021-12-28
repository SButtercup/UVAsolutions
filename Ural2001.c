#include<stdio.h>
int main()
{
    unsigned int a[4],b[4],w1,w2,k;
    for(k=0;k<3;k++)
    {
        scanf("%u%u",&a[k],&b[k]);
    }
    if(a[0]==0&&b[0]==0)
        printf("0 0\n");
    else if((a[1]>=a[0]&&a[2]<=a[0])&&(b[1]<=b[0]&&b[2]>=b[0]))
        printf("%u %u\n",a[0]-a[2],b[0]-b[1]);
    return 0;
}
