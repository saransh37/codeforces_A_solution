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
   string s;
   cin>>s;
   stack<char>st;
   int n=s.length();
   if(n%2!=0)
   cout<<"NO"<<"\n";
   else{
   for(int i=0;i<n;i++){
        if(s[i]=='?')
            continue;
        else{
            if(s[i]==')'&&!st.empty()&&st.top()=='(')
                   st.pop();
                else
                    st.push(s[i]);
        }
   }
   if(st.empty())
    cout<<"YES"<<"\n";
   else{
        int cnt=0;
   for(int i=0;i<n;i++)
                {
                    if(s[i]=='(')
                    {
                        for(int j=i+1;j<n;j++)
                        {
                            if(s[j]=='?')
                            {
                            cnt++;
                            break;
                            }

                        }
                    }
                    else if(s[i]==')')
                    {
                        for(int j=i-1;j>=0;j--)
                        {
                            if(s[j]=='?')
                            {
                                cnt++;
                                break;
                            }
                        }
                    }
                }
                if(cnt==2)
                cout<<"YES"<<"\n";
                else
                cout<<"NO"<<"\n";
   }
   }

}
}
