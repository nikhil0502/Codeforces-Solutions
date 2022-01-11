#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,sum=0,sum1=0;
  cin>>a>>b>>c;
  for(int i=1;i<=c;i++){
    sum = i*a;
    sum1 += sum;
  }
  if(sum1>b){
    cout << sum1-b;
  }
  else{cout<<0;}
  return 0;
}
