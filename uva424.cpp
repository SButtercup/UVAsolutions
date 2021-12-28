#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int a[1000]={0},b[1000]={0},c[10000]={0};
int main()
{
    int i,j,k,l=0,n=0,s=0;
    char str[1000];
    while(gets(str))
    {
        for(i=0;i<150;i++)
        {
            c[i]=0;
        }
        k=0;
        l=strlen(str);
        if(l==1&&(str[0]-'0')==0)
        {
            for(i=n-1;i>=0;i--)
                cout<<b[i];
            cout<<endl;
            l=0;
            n=0;
            for(i=0;i<150;i++)
            {
                a[i]=0;
                b[i]=0;
            }
        }
        else
            {
                for(i=0,j=l-1;i<l;i++,j--)
                {
                    c[i]=str[j]-'0';
                }
                if(n>l)
                    l=n;
                for(i=0,j=l-1,n=0;j>=0;j--,i++,n++)
                {
                    s=(c[i]+a[j]+k);
                    b[i]=s%10;
                    if(j==0&&(s/10)>0){
                        b[i+1]=s/10;
                        n++;}
                    if(s>=10)
                        k=1;
                    else
                        k=0;
                }
                for(i=0,j=n-1;j>=0;i++,j--){
                    a[i]=b[j];}
            }
    }
    return 0;
}
