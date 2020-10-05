#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int f=0,r,c;
    for(int i=0;i<n;i++){
            string s=a[i];
       if(s[0]=='O'&&s[1]=='O'){
        r=i;
        c=0;
        f=1;
        break;
       }
       else if(s[3]=='O'&&s[4]=='O'){
        r=i;
        c=3;
        f=1;
        break;
      }
    }
    if(f){
        cout<<"YES"<<"\n";
        for(int  i=0;i<n;i++){
           string s=a[i];
           if(i==r){
             if(c==0){
                cout<<"++|";
                cout<<s[3]<<s[4];
             }
             else{
                cout<<s[0]<<s[1]<<"|";
                cout<<"++";
             }
           }
           else{
            cout<<s;
           }
           cout<<"\n";
        }
    }
    else
        cout<<"NO";


}



