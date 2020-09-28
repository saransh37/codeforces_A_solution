#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int a,b,side;
    cin>>a>>b;
    if(a>b){
        if(2*b>=a)
            side=2*b;
        else
            side=a;
    }
    else{
        if(2*a>=b)
            side=2*a;
        else
            side=b;
    }
    cout<<side*side<<"\n";
   }
}
