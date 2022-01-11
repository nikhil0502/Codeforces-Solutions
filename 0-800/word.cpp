#include<bits/stdc++.h>
using namespace std;
int main(){
  string s1,s2;
  int sum=0,sum1=0;
  cin>>s1;
  for(int i=0;i<s1.size();i++){
    if(s1[i]>=97){
      sum++;
    }
    else{
      sum1++;
    }
  }
  if(sum<sum1){
    transform(s1.begin(),s1.end(),s1.begin(), ::toupper);
  }
  else{
    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
  }
  cout<<s1;
  return 0;
}
