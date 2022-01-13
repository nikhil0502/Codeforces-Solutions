#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  if(n==1){
  cout<<a[0];
  return 0;
  }
  sort(a,a+n);
  if(n==3){
    cout<<a[1];
  }
  else{
    cout<<a[2];
  }
  return 0;

}
