#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s,rev;
   cin>>s>>rev;
   reverse(rev.begin(),rev.end());
   if(rev==s)
    cout<<"YES";
   else
    cout<<"NO";

}
