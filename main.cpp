#include <iostream>

using namespace std;

int main()
{
  int c;
  double a, b;
    cout << "Vvedile pervoe chislo: ";
    cin >> a;
    cout << "Vvedite vtoroe chislo: ";
    cin >> b;
    cout << "Viberite operaciju: 1-(+), 2-(-), 3-(*), 4-(/):";
    cin >> c;
  switch (c) 
  {
	case 1:
	{
		cout << a << "+" << b << "=" << a + b << endl;
		break;
	}
	case 2:
	{
		cout << a << "-" << b << "=" << a - b << endl;
		break;
	}
	case 3:
	{
		cout << a << "*" << b << "=" << a * b << endl;
		break;
	}
	case 4:
	{
		cout << a << "/" << b << "=" << a / b << endl;
		break;
	}
	default:
		cout << "error" << endl;
	return 0;
	}
}
