#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
int a[26]={0};
int res=0;
if(s[1]=='}')
    cout<<0;
else{
     for(int i=1;i<=s.length()-1;i+=3)
        a[s[i]-97]++;

     for(int i=0;i<26;i++){
         if(a[i]>0)
         res++;
     }
     cout<<res;
}
}

