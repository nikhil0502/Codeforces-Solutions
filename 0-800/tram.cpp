#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,c=0,sum=0,sum1=0,d=0;
  cin>>n;
  while(n--){
    cin>>a>>b;
    sum = sum+a;
    sum1 = sum1+b;
    c = abs(sum-sum1);
    d = max(d,c);
  }
  cout<<d<<" "<<endl;
  return 0;
}
