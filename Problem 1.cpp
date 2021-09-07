#include<iostream>
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int N;
		cin>>N;
		int arr[11];
		for (int i=0;i<11;i++)
		{
			arr[i]=0;
		}
		for (int i=0;i<N;i++)
		{
			int a,b=0;
			cin>>a;
			cin>>b;
			if (arr[a]<=b)
			{
				arr[a]=b;
			}
		}
		int sum=0;
		for (int i=0;i<9;i++)
		{
			sum=sum+arr[i];
		}
		cout<<sum;
		cout<<"\n";
	}
}
