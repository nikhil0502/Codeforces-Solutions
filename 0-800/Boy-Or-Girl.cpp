#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int sum=0;
  cin>>s;
  sort(s.begin(),s.end());
  for(int i=1;i<s.size();i++){
    if(s[i] != s[i-1]){
      sum++;
    }
  }
  if(sum%2==0){
    cout<<"IGNORE HIM!"<<endl;
  }
  else{
    cout<<"CHAT WITH HER!"<<endl;
  }
  return 0;
}
