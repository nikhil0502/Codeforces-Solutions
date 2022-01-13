#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,count=0;
  cin>>a>>b;
  while(a>0){
    a/=10;
    count++;
  }
  while(count--){
    if(a==b){
      cout<<"0";
    }
    else{
      cout<<"1";
    }
  }
  return 0;
}
