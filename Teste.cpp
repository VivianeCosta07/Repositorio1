#include <iostream>
#include <locale>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	int num1, num2;
	cout << "Escreva o primeiro n�mero: ";
	cin >> num1;
	cout << "Escreva o segundo n�mero: ";
	cin >> num2;
	cout << " " << endl;
	if (num1 % num2 == 0)
	{
		cout << "S�o n�meros m�ltiplos";
		cout << " " << endl;	
	}
	else
	{
		cout << "N�o s�o n�meros m�ltiplos";
		cout << " " << endl;
	}
return 0;
}