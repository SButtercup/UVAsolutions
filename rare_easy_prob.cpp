#include<iostream>
using namespace std;
int main()
{
    int n,x;
    while(cin>>n)
    {
        if(n==0)
            break;
        x=(n*10)/9;
        if((n*10)%x==0)
            cout<<x-1<<" "<<x;
        else
            cout<<x;
        cout<<endl;
    }
    return 0;
}
