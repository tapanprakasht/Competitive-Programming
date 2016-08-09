#include <iostream>
using namespace std;

int main()
{
    int t;
    long long i,count=0,j;
    string s;
    cin>>t;
    while(t--)
    {
    	cin>>s;
    	j = s.length()-1;
    	count = 0;
    	for(i=0,j;i<=j;i++,j--)
    	{
    		if(s[i]!=s[j])
    		{
    			count += (s[i]>s[j])?s[i]-s[j]:s[j]-s[i];
    		}
    	}
    	cout<<count<<endl;
    }
    return 0;
}
