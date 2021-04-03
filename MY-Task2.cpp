#include <iostream>
using namespace std;
int main()
{
	for(int i=2;i<=10;i++)
	{
		int n=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				n=1;
				break;
			}
		}
		if(n==0)
		{
			cout<<"\n prime number is: "<<i<<endl;
		}
	}
	return 0;
}
