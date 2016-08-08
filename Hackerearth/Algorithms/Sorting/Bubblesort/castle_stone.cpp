#include <iostream>
using namespace std;

int main()
{
    int t,m,n,*a,i,j,temp,count;
    cin>>t;
    while(t--)
    {
    	count =0;
    	cin>>m>>n;
        a = new int[n];
    	for(i=0;i<n;i++)
    		cin>>a[i];
    	for(i=0;i<n-1;i++)
    	{
    		for(j=0;j<n-i-1;j++)
    		{
    			if(a[j]>a[j+1])
    			{
    				temp = a[j];
    				a[j] = a[j+1];
    				a[j+1] = temp;
    			}
    		}
    	}

        
    	i=0;j=n-1;
        //cout<<"\nInitial Val:"<<i<<j<<endl;
    	while(i<=j)
    	{
            if(i==j)
            {
                count++;break;
            }
    		if(a[i]+a[j]<=m)
    		{
    			count++;i++;j--;
               // cout<<"\nVal:"<<i<<j<<endl;
    		}

    		else
    		{
                if(a[j]<=m)
                    count++;
    			j--;
    		}
    	}

    	cout<<count<<endl;
    }
    return 0;
}
