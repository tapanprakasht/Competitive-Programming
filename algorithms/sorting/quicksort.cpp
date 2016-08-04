#include <iostream>
using namespace std;

int partition(int a[],int p,int r)
{
	int x = a[r],j,temp;
	int i = p-1;
	for(j=p;j<r;j++)
	{
		if(a[j]<=x)
		{
			i++;

			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}

	temp = a[i+1];
	a[i+1] = a[r];
	a[r] = temp;

	return i+1;
}

void quicksort(int a[],int p,int r)
{
	int piv;
	if(p<r)
	{
		piv = partition(a,p,r);
		quicksort(a,p,piv-1);
		quicksort(a,piv+1,r);
	}
}

int main()
{
	int *a,n,i;
	cin>>n;
	a = new int[n];
	for(i=0;i<n;i++)
		cin>>a[i];

	quicksort(a,0,n-1);

	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}