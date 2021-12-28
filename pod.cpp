#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
long n,a[1000],j,i,d,k;
cin>>k;
while(k--)
    {
    cin>>n;

    if(n<10){
            cout<<n<<endl;
            continue;
            }
    d=9;
    i=0;
    while(d>1){
              while(n%d==0){
                           n/=d;
                           a[i++]=d;
                           }
              d--;
              }
    sort(a,a+i);
    if(n==1){
           for(j=0;j<i;j++)
            cout<<a[j];
           cout<<endl;
           }
    else cout<<-1<<endl;
    }
return 0;
}
