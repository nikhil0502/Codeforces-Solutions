#include<iostream>
using namespace std;
int num[100010];
int main(){
    int n,k,i;
    while(cin>>n){
        for(i=0;i<n;i++){
            cin>>k;
            num[k]=1;
        }
        for(i=1;i<=n;i++){
            if(!num[i]){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
