#include<iostream>
#include<algorithm>
using namespace std;
int ugly[25000];
int searching(int n,int m)
{
    int k,o=0;
    for(k=0;k<m;k++)
    {
        if(n==ugly[k])
            o=1;
    }
    return o;
}
int main()
{
    int i,j,l,p,q,r,a,c;
    for(i=0,j=1;i<8;j++)
    {
        if(j==7)
            continue;
        ugly[i]=j;
        i++;
    }
    l=8;
    j=l;
    while(j<300)
    {
        for(i=l/2;i<l;i++)
        {
            p=ugly[i]*2;
            c=searching(p,j);
            if(c==0)
            {
                ugly[j]=p;
                j++;
            }
            q=ugly[i]*3;
            c=searching(q,j);
            if(c==0)
            {
                ugly[j]=q;
                j++;
            }
            r=ugly[i]*5;
            c=searching(r,j);
            if(c==0)
            {
                ugly[j]=r;
                j++;
            }

        }
        sort(ugly,ugly+j);
        for(i=0;i<j;i++)
            cout<<ugly[i]<<"  ";
        //cout<<endl;
       l=j;
    }
    cout<<endl<<endl<<ugly[100]<<endl;
    return 0;
}

