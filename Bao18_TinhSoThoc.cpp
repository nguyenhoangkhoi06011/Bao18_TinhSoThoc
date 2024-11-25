#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	cout << "tinh so thoc tren ban co vua\n";
	int SoO;
	double tongthoc = 0;
	cout << "nhap so o:"; cin >> SoO;

	for (int i = 0; i <SoO; i++)
	{
		cout << "o thu" << i + 1 << "co" << pow(2, i) << "thoc\n";
		tongthoc = tongthoc + pow(2, i);
	}
	cout << "tong so thoc la:" << tongthoc;
	return 0;
}

