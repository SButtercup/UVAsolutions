#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

int divisors(int no)
{
    int divisorCount=0;
    for(int k=1;k<=no;k++)
    {

        if(no%k==0)
            divisorCount++;
    }
    return divisorCount;
}

bool comp(pair<int,int>No1,pair<int,int>No2)
{

    if(No1.second!=No2.second)
        return No1.second<No2.second;
    else
        return No1.first>No2.first;

}

int main()
{

    int test_case,n,i,l;
    vector< pair<int,int> >NoDivisorVec;
    for(i=1;i<=1000;i++)
    {

        NoDivisorVec.push_back(make_pair(i,divisors(i)));

    }

    sort(NoDivisorVec.begin(),NoDivisorVec.end(),comp);
    scanf("%d",&test_case);
    for(l=1;l<=test_case;l++)
    {

        scanf("%d",&n);
        printf("Case %d: %d\n",l,NoDivisorVec[n-1].first);
    }

    return 0;



}
