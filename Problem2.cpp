#include<iostream>
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int N;
		int k=0;
		int b=0;
		int c=0;
		cin>>N;
		long long int arr[N];
		for (int i=0;i<N;i++)
		{
			cin>>arr[i];
		}
		for (int i=0;i<N;i++)
		{
			if (arr[i]==2)
			{
				b=b+1;
			}
			if (arr[i]==0)
			{
				c=c+1;
			}
		}
		if (b>1)
		{
			k=b*(b-1);
			k=k/2;
		}
		if (c>1)
		{
			k=2*k+c*(c-1);
			k=k/2;
		}
		cout<<k;
		cout<<"\n";
	}
}
