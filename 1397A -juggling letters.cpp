#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ar[n];
        int a[26]={0};
        for(int i=0;i<n;i++){
            cin>>ar[i];
            string str=ar[i];
            for(int i=0;i<str.length();i++){
                a[str[i]-'a']++;
            }
        }
        int f=1;
        for(int i=0;i<26;i++){
            if(a[i]%n!=0){
                f=0;
                break;}
        }
        if(f)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<"\n";
    }
}
