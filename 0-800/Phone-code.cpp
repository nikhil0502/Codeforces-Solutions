#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,count=0;
  cin>>n;
  bool flag = true;
  string s[n];
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  int a = s[0].size();
  for(int i=0;i<a;i++){
    for(int j=0;j<n-1;j++){
        if(s[j][i] == s[j+1][i]){
          continue;
        }
        else{
          flag = false;
          break;
        }
    }
    if(flag==true){
      count++;
    }
    else
    break;
  }
  cout<<count;
  return 0;
}
