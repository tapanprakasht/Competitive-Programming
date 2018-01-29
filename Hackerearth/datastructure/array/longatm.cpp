#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,a,t,g=0;
    t = INT_MAX;
    cin>>n;
    while(n--) {
        cin>>a;
        if(a<t) g++;
        t = a;
    }
    cout<<g<<endl;
}