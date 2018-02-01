#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n,*a,m = -1000001,mn,num,i,c;
    cin>>n;
    a = new ll[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    i=0;
    while(i<(n-1)) {
        c = 0;
        while(a[i] == a[i+1]) {
            c++;
            num = a[i];
            i++;
        }
        i++;
        if(c>m) {
            m = c; 
            mn = num ;
        }
    }
    cout<<mn<<endl;
}