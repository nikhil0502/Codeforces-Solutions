#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a[10000];
  float sum=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
  cout<<fixed<<setprecision(12)<<sum/n;
  return 0;
}
