#include<iostream>
#include<set>
using namespace std;
int main() {
    int t;
    long long n,k,i,sum,ssum;
    cin>>t;
    set<long long> a;
    set<long long>::iterator it;
    while(t--) {
        cin>>n;
        a.clear();
        sum = ssum = 0;
        for(i=1;i<=n;i++) {
            cin>>k;
            sum += k;
            a.insert(k);
        }
        for(it=a.begin();it!=a.end();++it) {
            ssum += (*it) * 3;
        }
        cout<<(ssum - sum)/2<<endl;
    }
    
}