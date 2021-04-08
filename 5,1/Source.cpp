#include <iostream>
#include <string>

using namespace std;

class EDivideBYZero {};

class Fraction {
public:
	int first;
	int second;

	Fraction(int first, int second) {
		this->first = first;
		this->second = second;
	}

	void ipart()
	{
		if (second == 0)
			throw EDivideBYZero();
		cout << first / second << endl;
		//cout << "��������� �� ���� ���� �����!! " << endl;

	}
};

int main()
{
	setlocale(LC_ALL, "ukr");

	Fraction first(15, 44);

	cout << "����� �����: ";
	cin >> first.first;
	cout << "����� �����: ";
	cin >> first.second;
	cout << "³������: ";
	first.ipart();
	try
	{
		cout << first.first / first.second << endl;
	}
	catch (EDivideBYZero)
	{
		cerr << "��������� �� ���� ���� �����!! " << endl;
	}

	return 0;
}