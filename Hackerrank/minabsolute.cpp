#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
    long long n,*a,i,min;
    cin>>n;
    a = new long long[n];
    for(i=0;i<n;i++) 
        cin>>a[i];
    sort(a, a+n);
    min = a[1] - a[0];
    for(i=1;i<n-1;i++) {
        if((a[i+1]-a[i]) < min) 
            min = a[i+1]-a[i];
    }
    cout<<min<<endl;
}