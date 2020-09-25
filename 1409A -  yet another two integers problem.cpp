#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    int val=abs(a-b);
    if(val%10==0)
        cout<<val/10;
    else
        cout<<val/10+1;
    cout<<"\n";

    }
}


