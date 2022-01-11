#include<bits/stdc++.h>
using namespace std;
int main(){
  string s1;
  int arr[100],c=0;
  getline(cin,s1);
  for(int i=0;i<s1.size();i++){
    if(s1[i]=='+'){
      continue;
    }
    else{
      arr[c++]=s1[i] - '0';
    }
    sort(arr,arr+c);
  }
    for(int i=0;i<c;i++){
      cout<<arr[i];
      if(i==c-1){
        break;
      }
      cout<<"+";
    }
  return 0;
}
