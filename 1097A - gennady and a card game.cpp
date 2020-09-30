#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   string ar[5];
   int f=0;
   for(int i=0;i<5;i++){
    cin>>ar[i];
    string str=ar[i];
    if((str[0]==s[0]||str[1]==s[1])&&f==0)
        f=1;
    }
    if(f)n
        cout<<"YES";
    else
        cout<<"NO";
}
