#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	long long int t;
	cin>>t;
	while (t--)
	{
		long long int N;
		cin>>N;
		int A[N],B[N];
		long long int Anum,Bnum;
			cin>>Anum;
			cin>>Bnum;
		for (int i=0;i<N;i++)
		{
			A[N-i-1]=Anum%10;
			B[N-i-1]=Bnum%10;
			Anum=Anum/10;
			Bnum=Bnum/10;
		}
		cout<<"\n";
		for (int i=0;i<N;i++)
		{
			cout<<A[i];
		}
		cout<<"\n";
		for (int i=0;i<N;i++)
		{
			cout<<B[i];
		}
		
	}
}
