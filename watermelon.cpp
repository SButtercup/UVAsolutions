#include<iostream>
using namespace std;
int main()
{
    int w;
    while(cin>>w)
    {
        if(w<1||w>100)
            break;
        if((w%2==0)&&w!=2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
