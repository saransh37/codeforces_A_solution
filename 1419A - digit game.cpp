#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int res;
    if(n==1){
        if(s[0]%2==0)
            res=2;
        else
            res=1;
    }
    else{
            int e_on_even=0;
            int o_on_odd=0;
        for(int i=0;i<n;i++){
            if((i+1)%2==0){
                if(s[i]%2==0)
                e_on_even++;
            }
            else{
                if(s[i]%2!=0)
                    o_on_odd++;
            }
        }
        if(n%2==0){
            if(e_on_even>=1)
                res=2;
            else
                res=1;
        }
        else{
            if(o_on_odd>=1)
                res=1;
            else
                res=2;
        }
    }
    cout<<res<<"\n";
   }
}
