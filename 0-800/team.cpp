#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,sum=0;
    cin>>n; //take the input
    while(n--){
        cin>>a>>b>>c; 
        if(a+b+c>=2){
            sum+=1;
        }
    }
    cout<<sum;
    return 0;
}
