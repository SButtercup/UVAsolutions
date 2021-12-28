#include<stdio.h>
#include<math.h>
int main()
{
    int sections,mfield[1000],i,total,maxm,k;
    while(scanf("%d",&sections)==1&&sections>2){
            maxm=0;
        for(i=0;i<sections;i++)
            scanf("%d",&mfield[i]);


        for(i=0;i<(sections-2);i++){
                total=mfield[i]+mfield[i+1]+mfield[i+2];
                if(total>maxm){
                    maxm=total;
                    k=i+1;

            }
        }
        printf("%d %d\n",maxm,++k);
    }
    return 0;
}
