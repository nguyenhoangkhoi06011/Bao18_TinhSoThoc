#include<cmath>
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "tinh so thoc tren ban co vua\n";
	int SoO;
	double tongthoc = 0;
	cout << "nhap so o:"; cin >> SoO;
	cout.imbue(locale("en_US.UTF-8")); //phan nghin
	if (SoO > 64) {
		cout << "tren ban chi co 64o,vui long nhap so<=64\n";
		system("pause");
		return 0;
		do 
		{
			cout << "nhap so o:"; cin >> SoO;
		} while (SoO >64 || SoO<0);
	}
	for (int i = 0; i <SoO; i++)
	{
		cout << "o thu" << i + 1 << "co\t\t"<<fixed<<setprecision(0) << pow(2, i) << "hat thoc\n";
		tongthoc = tongthoc + pow(2, i);
	}
	cout << "tong so thoc la:\t" << tongthoc << "hat thoc\n";
	return 0;
}

