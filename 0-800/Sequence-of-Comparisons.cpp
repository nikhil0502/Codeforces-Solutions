#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string s;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    if(s[0]=='>'&& s[0]>=s[1]){
      cout<<">"<<endl;
    }
    else if(s[0]== '='){
      cout<<"="<<endl;
    }
    else if(s[0]=='<' && s[0]<s[1]){
      cout<<"<"<<endl;
    }
    else{
      cout<<"?"<<endl;
    }
  }

  return 0;
}

incomplete
