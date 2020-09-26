#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    string res;
    int n=s.length();
    for(int i=0;i<n;i+=2){
        res=res+char(s[i]);
    }
    res=res+s[n-1];
    cout<<res<<"\n";
   }
}
