#include<iostream>
#include<algorithm>
using namespace std;
long long int a[1000];
int main()
{
    long long int n,i,j,count,c,t,p,m;
    while(cin>>t)
    {
        for(c=1;c<=t;c++)
        {
            cin>>n;
            j=0;
            p=1;
            m=n;
            if(n==1)
            {
                cout<<"1"<<endl;
            }
            else{
            for(i=9;i>=2;i--)
            {
                while((n%i)==0)
                {
                    a[j]=i;
                    n=n/i;
                    p=p*i;
                    j++;
                }
            }
            sort(a,a+j);
            if(m/p!=1)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                  for(i=0;i<j;i++)
                    cout<<a[i];
                  cout<<endl;
            }
            }
        }
    }
    return 0;
}
