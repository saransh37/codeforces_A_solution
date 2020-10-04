#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s,p;
    cin>>s>>p;
    int res=0;
    for(int i=0;i<n;i++){
        int val=abs(s[i]-p[i]);
        if(val>5)
            val=10-val;
        res+=val;
    }
    cout<<res;

}
