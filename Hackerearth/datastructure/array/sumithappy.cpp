#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    long long n,*a,max_so_far,curr_max,i;
    cin>>t;
    while(t--) {
        cin>>n;
        a = new long long[n];
        for(i=0;i<n;i++) {
            cin>>a[i];
        }
        max_so_far = curr_max = a[0];
        for(i=1;i<n;i++) {
            curr_max = max(a[i], curr_max+a[i]);
            max_so_far = max(max_so_far,curr_max);
            cout<<"max:"<<max_so_far<<endl;
        }
        cout<<max_so_far<<endl;
    }
}