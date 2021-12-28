#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    while(cin>>x>>y)
    {
        if(x==0&&y==0){
            break;}
        else if(x==1||y==1){
            z=y*x;}
        else if(x==2&&y==2){
            z=4;}
        else if(x==2&&y>2){
            if(y%4==0)
                {
                    z=y;
                }
            else
            {
                z=(x*y)-(2*((y-1)/2));}
            }
        else if(y==2&&x>2){
            if(x%4==0){
                z=x;}
            else{
                z=(x*y)-(2*((x-1)/2));}}
        else{
            z=(x*y)-((x*y)/2);}
        cout<<z<<" knights may be placed on a "<<x<<" row "<<y<<" column board."<<endl;
    }
    return 0;
}
