#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr=0;
  for(int i=1;i<=5;++i){
    for(int j=1;j<=5;++j){
      cin>>arr;
      if(arr==1){
        cout<<abs(i-3)+abs(j-3);
      }
    }
  }
  return 0;
}
