#include<iostream>
#include <string>
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
 			string A,B;
			cin>>A;
			cin>>B;
			int a=A.size();
			int b=B.size();
			int Anum[a],Bnum[b];
			for (int i=0;i<a;i++)
			{
				Anum[i]=A[i];
			}
			for (int i=0;i<b;i++)
			{
				Bnum[i]=B[i];
			}
			c=max (a,b);
			int U[c];
			for (int i=0;i<c;i++)
			{
				U[c]=0;
			}
			while (Bnum[0]!=0)
			{
				
			}		
			
		/*	function add(A, B):
			
    while B is greater than 0:
        U = A XOR B
        V = A AND B
        A = U
        B = V * 2
    return A*/		
    
    
   
	}
		
}

