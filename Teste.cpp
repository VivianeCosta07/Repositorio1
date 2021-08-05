#include <iostream>
#include <locale>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	int num1, num2;
	cout << "Escreva o primeiro número: ";
	cin >> num1;
	cout << "Escreva o segundo número: ";
	cin >> num2;
	cout << " " << endl;
	if (num1 % num2 == 0)
	{
		cout << "São números múltiplos";
		cout << " " << endl;	
	}
	else
	{
		cout << "Não são números múltiplos";
		cout << " " << endl;
	}
return 0;
}