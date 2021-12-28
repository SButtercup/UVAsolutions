#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    int l,i,j,c,k;
    char str[1000];
    while(gets(str))
    {
        c=0;
        k=1;
        l=strlen(str);
        for(i=0;i<l;i++)
        {
            j=(int)str[i];
            if((j>64&&j<91)||(j>96&&j<123))
            {
                if(k)
                {
                    c++;
                    k=0;
                }
            }
            else
                k=1;
        }
        cout<<c<<endl;

    }
    return 0;
}

