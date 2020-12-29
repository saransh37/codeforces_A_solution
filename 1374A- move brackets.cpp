#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define mod 1000000007
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 int t;
 cin>>t;
 while(t--){
   int n;
   cin>>n;
   string s;
   cin>>s;
   stack<char>st;
   for(int i=0;i<n;i++){
     if(st.empty())
     st.push(s[i]);
     else if(s[i]==')'){
      if(st.top()=='(')
        st.pop();
      else
        st.push(s[i]);
     }
     else
      st.push(s[i]);
   }
   int cnt=0;
   while(!st.empty()){
    st.pop();
    cnt++;
   }
   cout<<cnt/2<<"\n";
  }
}
