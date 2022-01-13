#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a;
  cin>>n>>a;

  if(n < a){
    cout<<"-1"<<" ";
  }
  else if(n%a==0){
    for(int i=0;i<a;i++){
      cout<<(n/a)<<" ";
    }
  }
  else{
    int sum = a - (n%a);
    int sum1= n/a;
    for(int i=0;i<a;i++){
      if(i >= sum){
        cout<<(sum1 + 1)<<" ";
      }
      else{
        cout<<sum1<<" ";
      }
    }
  }
  return 0;
}
