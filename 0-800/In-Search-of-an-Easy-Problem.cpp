#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,count=0;
  cin>>n;
  while(n--){
    cin>>a;
    if(a==1){
      count++;
    }
  }
  if(count>=1){
    cout<<"HARD";
  }
  else{
    cout<<"EASY";
  }
  return 0;
}
