#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    int cnt_e=0,cnt_o=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0)
            cnt_e++;
        else
            cnt_o++;
    }
    if((cnt_e>0&&cnt_o>0)||cnt_o%2!=0)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<"\n";
   }
 }
