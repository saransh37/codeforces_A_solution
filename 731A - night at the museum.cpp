
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int res=0;
    s='a'+s;
    for(int i=0;i<s.length()-1;i++){
        int val=abs(s[i]-s[i+1]);
        if(val<=13)
            res=res+val;
        else
            res=res+(26-val);
    }
    cout<<res;
}


