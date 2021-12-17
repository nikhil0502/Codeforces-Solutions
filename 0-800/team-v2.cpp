#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n; //take the input from user
  int count=0,b,sum=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){  //run 2 for loops one for rows and other for columns
      cin>>b;
      sum=sum+b; // here we add each column number for ith row
    }
    if(sum>=2){ // check whether the sum is greater than 2 or equal to 2
      count++;
      sum=0; //we initialize sum=0 so that the next value wont mix with the previous value
    }
    else{
      sum=0; //if condition dosen't satisfy then to we have to make sum=0 so the next value adds from 0
    }
  }
  cout<<count;
  return 0;
}
