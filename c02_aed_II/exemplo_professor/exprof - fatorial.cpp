#include <iostream>
using namespace std;

int fatorial (int n)
{
	if (n == 0) //condi��o de parada
		return 1;
	else //chamada recursiva
		return n * fatorial (n-1);
}

int main()
{
	//declarar vari�veis
	int n;
	
	//entrada de dados
	cin >> n;
	
	//sa�da de dados
	cout << "fatorial = " << fatorial(n) << endl;

	return 0;
}