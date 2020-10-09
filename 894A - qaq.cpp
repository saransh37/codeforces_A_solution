#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin>>s;
 int n=s.length();
 int cnt=0;
 for(int i=0;i<n-2;i++){
    if(s[i]=='Q'){
        for(int j=i+1;j<n-1;j++){
            if(s[j]=='A'){
                for(int k=j+1;k<n;k++){
                    if(s[k]=='Q'){
                        cnt++;
                    }
                }
            }
        }
    }
 }
 cout<<cnt;
}
