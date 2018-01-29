#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,*a,*temp,t,i,x,y,z;
    string s[1001];
    t = n;
    cin>>n;
    a = new int[n];
    temp = new int[n];
    for(i=0;i<n;i++) {
        cin>>s[i]>>a[i];
        temp[i] = a[i];
    }
    sort(a,a + n, greater<int>());
    for(i=0;i<n;i++) {
       if(temp[i]==a[0]) x = i;
       if(temp[i]==a[1]) y = i;
       if(temp[i]==a[2]) z = i;
    }
    cout<<s[x]<<"\n"<<s[y]<<"\n"<<s[z]<<"\n";
}