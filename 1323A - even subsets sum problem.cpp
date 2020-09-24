#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    int cnt_o=0;
    int res,ind,f=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0&&f==0){
           res=1;
           ind=i+1;
           f=1;
        }
        else if(f==0){
            cnt_o++;
            v.push_back(i+1);
        }
    }
    if(f)
        cout<<res<<"\n"<<ind<<"\n";
    else if(cnt_o>=2){
            cout<<2<<"\n"<<v[0]<<" "<<v[1]<<"\n";
        }
    else
        cout<<-1<<"\n";

}
}
