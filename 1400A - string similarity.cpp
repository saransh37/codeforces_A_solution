#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
        string s;
        cin>>s;
        string str;
        for(int i=0;i<s.length();i+=2){
            str=str+s[i];
        }
        cout<<str<<"\n";
    }
}
