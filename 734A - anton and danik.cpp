#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int cnt_a=0,cnt_d=0;
   for(int i=0;i<s.length();i++){
    if(s[i]=='A')
        cnt_a++;
    else
        cnt_d++;
   }
   if(cnt_a>cnt_d)
    cout<<"Anton";
   else if(cnt_a<cnt_d)
    cout<<"Danik";
   else
    cout<<"Friendship";
}
