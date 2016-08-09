#include <iostream>
using namespace std;

int main()
{
  
    long long n,*a,k,i,j,temp,min,sum,count;
    cin>>n>>k;
    a = new long long[k];
    for(i=0;i<n;i++)
    	cin>>a[i];
    
    for(i=0;i<n-1;i++)
    {
    	min = i;
    	for(j=i+1;j<n;j++)
    	{
    		if(a[j]<a[min])
    			min = j;
    	}
    	
    	temp = a[min];
    	a[min] = a[i];
    	a[i] = temp;
    }
    
    sum = count = 0;
    for(i=0;i<n;i++)
    {
    	
    	if(sum>k)
    	{
    		cout<<count-1<<endl;
    		return 0;
    	}
    	sum+=a[i];
    	count++;
    	
    }
    return 0;
}