
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define mod 1000000007
int main(){
 int n;
 cin>>n;
 string s;
 cin>>s;
 int flag=0,cnt=0,res=0;
 for(int i=0;i<n;i++){
    if(cnt==2){
        if(s[i]=='x'){
           res++;
        }
        else{
          cnt=0;
        }
     }
     else if(s[i]=='x')
        cnt++;
    else
       cnt=0;
 }
 cout<<res;
}
