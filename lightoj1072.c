#include<stdio.h>
#include<math.h>

int main()
{

    double Radius,rad;
    int no_of_circs,case_no,i;
    double pi=acos(-1);
    while(scanf("%d",&case_no)==1)
    {

        for(i=1;i<=case_no;i++)
        {

            scanf("%.2lf %d",&Radius,&no_of_circs);
            double ang=pi/no_of_circs;
            rad=(Radius*sin(ang))/(sin(ang)+1);
            printf("Case %d: %.10lf\n",i,rad);
        }

    }
    return 0;
}
