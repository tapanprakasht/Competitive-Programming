#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    long long n,*a,i,count =1,m;
    cin>>n;
    a = new long long[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a, a+n);
    m = a[n-1];
    for(i=n-2;i>=0;i--) {
        if(a[i]==m) count++;
        else break;
    }
    cout<<count<<endl;
}