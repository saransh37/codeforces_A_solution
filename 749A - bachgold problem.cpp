#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
 int n;
 cin>>n;
 if(n==2)
    cout<<1<<"\n"<<2;
 else if(n==3)
    cout<<1<<"\n"<<3;
 else{
    if(n%2==0){
        cout<<n/2<<"\n";
        int val=n/2;
        while(val--){
            cout<<2<<" ";
        }
    }
    else{
        cout<<n/2<<"\n";
        int val=n/2-1;
        while(val--){
            cout<<2<<" ";
        }
        cout<<3;
    }
 }
}
