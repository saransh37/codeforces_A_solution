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
     int not_right=0,cnt_o=0,cnt_e=0;
     for(int i=0;i<n;i++){
        cin>>a[i];
        if((a[i]%2)!=(i%2)){
                not_right++;
                if(a[i]%2==0)
                 cnt_e++;
                else
                 cnt_o++;
         }
     }
     if(not_right%2==0){
        if(cnt_o==cnt_e)
            cout<<not_right/2<<"\n";
        else
            cout<<-1<<"\n";
     }
     else
        cout<<-1<<"\n";
   }
}
