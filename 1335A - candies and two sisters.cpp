#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=0;
        if(n%2==0)
            res=n/2-1;
        else
            res=n/2;
        cout<<res<<"\n";
    }

}
