#include <iostream>
using namespace std;
int main()
{
	double C;
	cin>>C;
	cout.setf(ios::fixed);
	cout.precision(3);
	cout<<9/(double)5*C+32<<"\n";
	return 0;
}