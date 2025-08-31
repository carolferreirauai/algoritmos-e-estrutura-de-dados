#include <iostream>
using namespace std;

int fatorial (int n)
{
	if (n == 0) //condição de parada
		return 1;
	else //chamada recursiva
		return n * fatorial (n-1);
}

int main()
{
	//declarar variáveis
	int n;
	
	//entrada de dados
	cin >> n;
	
	//saída de dados
	cout << "fatorial = " << fatorial(n) << endl;

	return 0;
}