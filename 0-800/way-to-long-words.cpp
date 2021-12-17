#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n; //gets the input number from user
  string s;
  cin.ignore(); //in string the first line is blank line which casue error in taking input so this helps in ignoring that blank line
  while(n--){
    getline(cin,s); //another way to get input in strings
    int a=s.length(); //storing the length in a int variable for easy understanding
    if(a>10){
      cout<<s[0]<<a-2<<s[a-1]<<endl;
    }
    else{
      cout<<s<<endl;
    }
  }
  return 0;
}
