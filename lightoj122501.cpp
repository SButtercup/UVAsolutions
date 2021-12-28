#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str,rev;
    int i ,j,k;
    while(cin>>i)
    {
        for(j=1;j<=i;j++)
        {
            cin>>str;
            rev=str;
            reverse(rev.begin(),rev.end());
            if(str==rev)
                 cout<<"Case "<<j<<": Yes"<<endl;
            else
                cout<<"Case "<<j<<": No"<<endl;
        }
    }
    return 0;
}
