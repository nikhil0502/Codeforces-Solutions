#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,c=0;
  cin>>n>>m;
  if(n>m){
    c=0;
  }
  else{
    while(n<=m){
      n=n*3;
      m=m*2;
      c++;
    }
  }
  cout<<c;
  return 0;
}
