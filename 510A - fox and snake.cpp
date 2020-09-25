#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string a,b="#",c="#";
    for(int i=0;i<m;i++)
        a=a+"#";
    for(int i=0;i<m-1;i++)
        b="."+b;
    for(int i=0;i<m-1;i++)
        c=c+".";
    int f=1;

    for(int i=0;i<n;i++){
        if(i%2==0)
        cout<<a;
        else if(f==1){
            cout<<b;
            f^=1;
        }
        else{
            cout<<c;
            f^=1;
        }
        cout<<"\n";
    }
}
