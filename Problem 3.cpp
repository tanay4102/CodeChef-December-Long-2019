#include<iostream>
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		long long int N;
		cin>>N;
		long long int K=0;
		char S[N];
		for (long long int i=0;i<N;i++)
		{
			cin>>S[i];
		}
		long long int arr[26][N];
		long long int ar[26];
		for (int u=0;u<26;u++)
		{
			ar[u]=0;
		}
		for (long long int x=0;x<N;x++)
		{
		for (int b=0;b<26;b++)
		{
			arr[b][x]=0;
		}
		}
		for (char i='a';i<'a'+26;i++)
		{
			for (long long int j=0;j<N;j++)
			{
				if (i==S[j])
				{
					
					arr[i-'a'][j]=1;
				}
				if (i==S[j])
				{
					ar[i-'a']=ar[i-'a']+1;
				}
			}
		}
		for (int r=0;r<26;r++)
		{
			if (ar[r]>1)
			{
					long long int minD=1000000;
					long long int curD=0;
					long long int firsteye=0;
					long long int counter=0;
				for (long long int j=0;j<N;j++)
				{
				
					if (arr[r][j]==1)
					{
						counter=counter+1;
						if (counter>1)
						{
							curD=firsteye;
							firsteye=j;
							minD=min(minD,(firsteye-curD));
						}
						else
						{
							firsteye=j;
						}
						
					}
				}
				K=N-minD;
			}
		}
		if (N==1)
		{
			K=1;
		}
		cout<<K;
		cout<<"\n";
	/*		for (int b=0;b<26;b++)
			{
				cout<<"\n";
				cout<<ar[b];
			}
			cout<<"End of first cout \n";
		for ( int t=0;t<26;t++)
		{
			for(int y=0;y<N;y++)
			{
				cout<<arr[t][y];
			}
			cout<<"\n";
		}
	*/		
	}
}
