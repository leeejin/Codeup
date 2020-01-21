#include <iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	if(n1>n2)
	{
		if(n2>n3) cout<<n3<<"\n";
		else cout<<n2<<"\n";
	}
	else
	{
		if(n1>n3) cout<<n3<<"\n";
		else cout<<n1<<"\n";
	}
	return 0;
}