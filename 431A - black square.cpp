#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int a[4];
   for(int i=0;i<4;i++)
   cin>>a[i];
   string s;
   cin>>s;
   int res=0;
   for(int i=0;i<s.length();i++){
        int block=s[i]-'0';
    res+=a[block-1];
   }
   cout<<res;
 }
