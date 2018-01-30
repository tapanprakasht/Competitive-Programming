#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,q,*a,l,r,i,temp;
    cin>>n;
    a = new long long[n+1];
    for(i=1;i<=n;i++) {
        cin>>a[i];
    }
    cin>>q;
    while(q--) {
        cin>>l>>r;
        for(i=l;i<=r;i++) {
            temp = a[i];
            a[i] = a[n-i+1];
            a[n-i+1] = temp;
        }
    }
    for(i=1;i<=n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}