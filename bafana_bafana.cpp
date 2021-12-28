#include<iostream>
using namespace std;
int main()
{
    unsigned long long int n,k,p,t;
    while(cin>>t)
    {
        if(t<1||t>1000)
            break;
        for(int i=1;i<=t;i++)
        {
            cin>>n>>k>>p;
            if((n<2||n>23)||(k<1||k>n)||(p<1||p>1000))
                break;
            else if((k+p)%n==0)
                cout<<"Case "<<i<<": "<<n<<endl;
            else
                cout<<"Case "<<i<<": "<<((k+p)%n)<<endl;
        }
    }
    return 0;
}
