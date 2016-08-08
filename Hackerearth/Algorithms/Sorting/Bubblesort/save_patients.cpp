#include <iostream>
using namespace std;

int main()
{
    int *v,*p,n,flag=0,i,j,temp;
    cin>>n;
    v = new int[n];
    p = new int[n];
    
    for(i=0;i<n;i++)
    	cin>>v[i];
    for(i=0;i<n;i++)
    	cin>>p[i];
    	
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-i-1;j++)
    	{
    		if(v[j]>v[j+1])
    		{
    			temp = v[j];
    			v[j+1] = v[j];
    			v[j] = temp;
    		}
    	}
    }
    
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-i-1;j++)
    	{
    		if(p[j]>p[j+1])
    		{
    			temp = p[j];
    			p[j+1] = p[j];
    			p[j] = temp;
    		}
    	}
    }
    
    for(i=0;i<n;i++)
    {
    	if(v[i]<p[i])
    	{
    		flag = 1;
    		break;
    	}
    }
    
    if(flag ==1)
    {
    	cout<<"No\n";
    }
    else
    {
    	cout<<"Yes\n";
    }
    return 0;
}
