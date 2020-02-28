
#include <iostream>
#include<time.h>
using namespace std;

void swap(int *a, int i, int j)
	{
		int s=a[i];
		a[i]=a[j];
		a[j]=s;
	}

int main()
{

	const int N=40;
	srand(time(NULL));

	
	int a[N], n;
	cout<<"random array of integers:";
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		a[i]=(rand() % 100) -50;
	}

	cout<<"random massive is:"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}

	int k;

	for(int j=0; j<n; j++)
	{
		k=0;
		for(int i=0; i<n-j; i++)
		{
			if (a[i]>a[i+1])
			{
				swap(a, i, i+1);
				k++;
			}
		}
		if(k>0) continue;
		else break;
	}

	cout<<endl<<"sort massive is:"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
		return 0;
}