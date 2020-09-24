#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,d;
cin>>n>>d;
string s;
cin>>s;
int i=1,res=0;
while(i!=n){
    int f=0;
    int temp=d;
    while(temp>=1){
        if(s[temp+i-1]=='1'){
            i+=temp;
            f=1;
            res++;
        }
        temp--;
        if(f==1)
            break;
    }
    if(f==0)
        break;
}
if(i!=n)
    cout<<-1;
else
    cout<<res;
}
