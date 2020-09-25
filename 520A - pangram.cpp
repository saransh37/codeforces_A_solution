#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   if(n<26)
    cout<<"NO";
   else{
    int a[26]={0};
    for(int i=0;i<n;i++){
        int val=tolower(s[i]);
        a[val-97]++;
    }
    int f=1;
    for(int i=0;i<26;i++){
        if(a[i]==0){
            cout<<"NO";
            f=0;
            break;
        }
    }
    if(f)
        cout<<"YES";
   }

}
