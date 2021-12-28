#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l,c=1;
    while(cin>>n)
    {
        int s[n];
        for(i=0;i<n;i++)
            cin>>s[i];
        long max=0,p;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                p=1;
                for(k=i;k<=j;k++)
                    p*=s[k];
                if(p>max)
                    max=p;
            }
        }
        cout<<"Case #"<<c<<": The maximum product is "<<max<<"."<<endl<<endl;
        c++;
    }
    return 0;
}
