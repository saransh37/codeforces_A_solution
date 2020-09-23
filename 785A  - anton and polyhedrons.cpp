#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int res=0;
    string s;
    while(n--){
        cin>>s;
        if(s[0]=='I')
            res+=20;
        else if(s[0]=='C')
            res+=6;
        else if(s[0]=='T')
            res+=4;
        else if(s[0]=='O')
            res+=8;
        else
            res+=12;
    }
    cout<<res;
}

