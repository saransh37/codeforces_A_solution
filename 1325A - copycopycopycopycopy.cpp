#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<"\n";
    }
}



