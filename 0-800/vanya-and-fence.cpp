#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,h,a,count=0;
  cin>>n>>h;
  while(n--){
    cin>>a;
    if(a>h){
      count+=2;
    }
    else{
      count++;
    }
  }
  cout<<count;
  return 0;
}
