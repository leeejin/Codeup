#include <iostream>
using namespace std;
int main()
{
	double cm,kg,avgkg,fat;
	cin>>cm>>kg;
	avgkg = (cm - 100) * 0.9;
	fat = (kg - avgkg) * 100/avgkg;
	if(fat>20)
	cout<<"비만"<<"\n";
	else if(fat>10)
	cout<<"과체중"<<"\n";
	else
	cout<<"정상"<<"\n";
	return 0;
}