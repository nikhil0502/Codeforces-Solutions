#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  string s;
  cin>>a>>b;
  cin>>s;
  while(b--){
    for(int i=1;i<a;++i){
      if(s[i]=='G' && s[i-1]=='B'){
        s[i]='B';
        s[i-1]='G';
        ++i;
      }
    }
  }
  cout<<s;
  return 0;
}
