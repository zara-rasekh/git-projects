#include <iostream>
using namespace std;
int main()
{
	int a=100;
	for(int i=1;i<=a;i++)
	{
		int b=0;
		for(int j=1;j<i;j++)
		{
			if (i%j ==0)
			{
				b++;
			}	
		}
		if (b==1)
		{
			cout<<i<<endl;
		}
	}
}
	