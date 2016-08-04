#include <iostream>
using namespace std;

int main()
{
	int *a,n,i,j,temp,min;
	cin>>n;
	a = new int[n];

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

	cout<<"Sorted array\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}