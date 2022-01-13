#include <bits/stdc++.h>
using namespace std;
int main(){
  const string t("heidi");
  string s;
  cin>>s;
  bool fake(false);
  long ind(0);
  for(long i=0;i<s.size();i++){
    if(s[i]==t[ind]){
      ++ind;
    }
    if(ind >=t.size()){
      fake = true;
      break;
    }

  }
  cout<<(fake ? "YES" : "NO");
}
