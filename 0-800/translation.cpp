#include<bits/stdc++.h>
using namespace std;
int main(){
  string s1,s2;
  getline(cin,s1);
  getline(cin,s2);
  reverse(s1.begin(),s1.end());
  if(s1==s2){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}
