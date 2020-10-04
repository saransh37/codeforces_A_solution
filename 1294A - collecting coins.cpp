#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b,c,n;
    cin>>a>>b>>c>>n;

    if((a+b+c+n)%3==0){
        long long val=(a+b+c+n)/3;
        if((a<=val&&b<=val)&&c<=val)
            cout<<"YES";
        else
            cout<<"NO";
    }

    else
        cout<<"NO";
    cout<<"\n";
     }
}
