#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
    int n,*a,i;
    long long m=0;
    cin>>n;
    a = new int[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a, a+n,greater<int>());
    for(i=0;i<n;i++){
        m += (a[i]* pow(2,i));
    }
    cout<<m<<endl;
}