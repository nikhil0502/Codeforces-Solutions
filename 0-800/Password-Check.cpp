#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int count=0,flagz=0,flag=0;
int a=s.length();
for(int i=0;i<a;i++){
  if(isupper(s[i])){
    flagz=1;
  }
  if(islower(s[i])){
    flag=1;
  }
  if(isdigit(s[i])){
    count=1;
  }
}

if(s.length()>=5 && count==1 && flagz==1&&flag==1){
  cout<<"Correct";
}
else{
  cout<<"Too weak";
}
return 0;
}
