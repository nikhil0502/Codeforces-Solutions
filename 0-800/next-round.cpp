#include<iostream>
using namespace std;

int main(){
    int n,k,sum=0;
    cin>>n>>k; //taking 2 inputs
    int a[n]; //assigning the size of a
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1]&&a[i]>0){ //checking condition to satisfy the problem requirements
            sum+=1; //if condition statisfy then we keep on adding 1
        }
    }
    cout<<sum;
    return 0;
}
