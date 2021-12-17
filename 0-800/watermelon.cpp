#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n; //takes the input
  //in this we first check if the no is 2 or not if 2 then it prints no or else the other if statement runs and gives the output
  if(n==2)
  {
    cout<<"NO"<<endl;
  }
  else if(n%2==0)
  {
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
}
  return 0;
}
