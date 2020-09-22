#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int cnt_l=0;
   int cnt_u=0;
   for(int i=0;i<s.length();i++){
    if(s[i]>='a'&&s[i]<='z')
        cnt_l++;
    else
        cnt_u++;
   }
   string res;
   if(cnt_u>cnt_l){
    for(int i=0;i<s.length();i++)
        res=res+char(toupper(s[i]));
   }
   else{
    for(int i=0;i<s.length();i++)
        res=res+char(tolower(s[i]));
   }
   cout<<res;
}
