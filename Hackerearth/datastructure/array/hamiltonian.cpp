#include<iostream>
using namespace std;
int main(){
    long long n,*a,i,j;
    int flag = 0;
    cin>>n;
    a = new long long[n];
    for(i=0;i<n;i++) 
        cin>>a[i];
    for(i=0;i<n;i++) {
        flag = 0;
        for(j=i+1;j<n;j++) {
            if(a[j] > a[i]){
                flag = 1;
                break;
            }
        }
        if(!flag) cout<<a[i]<<" ";
    }
    cout<<endl;
}