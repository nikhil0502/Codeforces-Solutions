#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,maxi=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    // maxi=max(maxi,a[i]);
  }
  maxi = max_element(a,a+n)-a+1;
  sort(a,a+n);
  cout<<maxi<<" "<<a[n-2]<<endl;
  return 0;
}
