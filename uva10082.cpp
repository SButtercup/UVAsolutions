#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char str[1000];
    int i,j,l;
    while(gets(str))
    {
        l=strlen(str);
        for(i=0;i<l;i++){
            j=(int)str[i];
            if(str[i]=='0'){
                cout<<"9";}
            else if(j<=57&&j>=50){
                cout<<(char)(j-1);}
            else if(str[i]=='1'){
                cout<<"`";}
            else if(str[i]=='-'){
                cout<<"0";}
            else if(str[i]=='='){
                cout<<"-";}
            else if(str[i]=='\\'){
                cout<<"]";}
            else if(str[i]==']'){
                cout<<"[";}
            else if(str[i]=='['){
                cout<<"P";}
            else if(str[i]=='P'){
                cout<<"O";}
            else if(str[i]=='O'){
                cout<<"I";}
            else if(str[i]=='I'){
                cout<<"U";}
            else if(str[i]=='U'){
                cout<<"Y";}
            else if(str[i]=='Y'){
                cout<<"T";}
            else if(str[i]=='T'){
                cout<<"R";}
            else if(str[i]=='R'){
                cout<<"E";}
            else if(str[i]=='E'){
                cout<<"W";}
            else if(str[i]=='W'){
                cout<<"Q";}
            else if(str[i]=='L'){
                cout<<"K";}
            else if(str[i]=='K'){
                cout<<"J";}
            else if(str[i]=='J'){
                cout<<"H";}
            else if(str[i]=='H'){
                cout<<"G";}
            else if(str[i]=='G'){
                cout<<"F";}
            else if(str[i]=='F'){
                cout<<"D";}
            else if(str[i]=='D'){
                cout<<"S";}
            else if(str[i]=='S'){
                cout<<"A";}
            else if(str[i]=='M'){
                cout<<"N";}
            else if(str[i]=='N'){
                cout<<"B";}
            else if(str[i]=='B'){
                cout<<"V";}
            else if(str[i]=='V'){
                cout<<"C";}
            else if(str[i]=='C'){
                cout<<"X";}
            else if(str[i]=='X'){
                cout<<"Z";}
            else if(str[i]==';'){
                cout<<"L";}
            else if(str[i]=='\''){
                cout<<";";}
            else if(str[i]=='/'){
                cout<<".";}
            else if(str[i]=='.'){
                cout<<",";}
            else if(str[i]==','){
                cout<<"M";}
            if(j==32){
                cout<<" ";}

        }
        cout<<endl;
    }
    return 0;
}
