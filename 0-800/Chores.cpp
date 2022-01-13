#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,c[2020];
  cin>>n>>a>>b;
  for(int i=0;i<n;i++){
    cin>>c[i];
  }
  sort(c,c+n);
  cout<<(c[b]-c[b-1]);
  return 0;
}
