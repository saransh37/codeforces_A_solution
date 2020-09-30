
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int total_a=0,total_b=0;
  int reached_a=0,reached_b=0;
  int s,x,y;
  while(n--){
    cin>>s>>x>>y;
    if(s==1){
        total_a++;
        reached_a+=x;
    }
    else{
        total_b++;
        reached_b+=x;
    }

  }
  if(reached_a>=total_a*5)
     cout<<"LIVE"<<"\n";
  else
     cout<<"DEAD"<<"\n";
  if(reached_b>=total_b*5)
    cout<<"LIVE";
  else
    cout<<"DEAD";

}
