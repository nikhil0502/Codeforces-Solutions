#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  int n,sum=0;
  cin.ignore();
  while(n--){
      getline(cin,str);
      if(str[1]==+){
        ++sum;
      }
      else{
        --sum;
      }
  }
  cout<<sum;
}
