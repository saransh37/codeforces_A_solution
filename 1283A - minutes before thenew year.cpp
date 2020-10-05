#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        int res=0;
        res+=(24-h-1)*60;
        res+=60-m;
        cout<<res<<"\n";
  }
}



