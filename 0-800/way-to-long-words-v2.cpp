#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n; //gets the input number from user
  string s;
  cin.ignore(); //in string the first line is blank line which casue error in taking input so this helps in ignoring that blank line
  while(n--){
    cin>>s;
    if(s.length()>10) //s.length stores the length of the given string
    {
      cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
    }
    else{
      cout<<s<<endl;
    }
  }
  return 0;
}
