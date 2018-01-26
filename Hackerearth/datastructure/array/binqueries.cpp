#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n,l,r,q,*a,x,t,num,k,i;
    cin>>n>>q;
    a = new long long[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    while(q--){
        cin>>t;
        if(t==0){
            cin>>l>>r;
            if(a[r-1]==0){
                cout<<"EVEN\n";
            } else {
                cout<<"ODD\n";
            }
        } else {
            cin>>x;
            a[x-1] = !a[x-1];
        }
    }
    return 0;
}