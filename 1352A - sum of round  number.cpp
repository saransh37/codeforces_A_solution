#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length(),res=0;
        for(int i=0;i<n;i++){
            if(s[i]!='0')
                res++;
        }
        cout<<res<<"\n";
        for(int i=0;i<n;i++){
            if(s[i]!='0')
                cout<<pow(10,n-1-i)*int(s[i]-'0')<<" ";
           }

        cout<<"\n";
    }
}
