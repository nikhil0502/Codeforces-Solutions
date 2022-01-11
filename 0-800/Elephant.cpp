#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a= n/5;
  if(n%5 > 0){
    a++;
  }
  cout<<a;
  return 0;
}
