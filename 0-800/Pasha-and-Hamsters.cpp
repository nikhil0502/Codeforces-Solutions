#include<bits/stdc++.h>
using namespace std;

vector<int> arr;
int main(){
  int n,a,b;
  cin>>n>>a>>b;

  arr.resize(n);
  int a1[a],b1[b];
  for(int i=0;i<a;i++){
    cin>>a1[i];
  }
  for(int j=0;j<b;j++){
    cin>>b1[j];
  }
  for(int i=0;i<b;i++){
    arr[b1[i]-1] = 2;
  }
  for(int i=0;i<a;i++){
    arr[a1[i]-1] = 1;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}
