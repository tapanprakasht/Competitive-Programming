#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,*a,af[101],*b,bf[101],ma,mb,i,ai,bi;
    cin>>t;
    while(t--) {
        cin>>n;
        a = new int[n];
        b = new int[n];
        for(i=1;i<=100;i++) {
            af[i] =0; bf[i]=0;
        }
        for(i=1;i<=n;i++) {
             cin>>a[i];
             af[a[i]]++;
        }
        memset(bf,0,sizeof(bf));
        for(i=1;i<=n;i++) {
             cin>>b[i];
             bf[b[i]]++;
        }
        ma = -1; mb = -1;
        for(i=1;i<=100;i++) {
            if(af[i]>=ma) {
                ma = af[i];
                ai = i;
            }
            if(bf[i]>=mb) {
                mb = bf[i];
                bi = i;
            }
        }
        if(ai>bi) cout<<"Rupam\n";
        else if(ai < bi) cout<<"Ankit\n";
        else cout<<"Tie\n";
    }
}