#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,count=0,a,b;
  cin>>n;
  while(n--){
    cin>>a>>b;
    if(b-a >=2){
      count++;
    }
  }
  cout<<count;
  return 0;
}
