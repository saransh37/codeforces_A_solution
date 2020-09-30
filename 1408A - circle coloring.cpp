#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int a[3][n];
      for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
      }
      int first=a[0][0],pre;
      pre=a[0][0];
      cout<<pre<<" ";
      for(int i=1;i<n;i++){
            int j=0;
            if(i==n-1){
                while(a[j][i]==pre||a[j][i]==first){
                    j++;
                }
             }
            else{
               while(a[j][i]==pre){
                 j++;
               }
            }
            pre=a[j][i];
            cout<<pre<<" ";
      }
    cout<<"\n";
   }
}
