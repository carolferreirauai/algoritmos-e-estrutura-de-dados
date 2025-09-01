#include <iostream>
#include <cmath>

using namespace std;

int potencia (int a, int n)
{
	if (n == 0) //condi��o parada
		return 1;
	else //chamada recursiva
		return a * potencia(a, n-1);
}

int main()
{
	//declarar vari�veis
	int a; //base
	int n; 
	
	//entrada de dados
	cin >> a >> n;
	
	//sa�da de dados
	cout << potencia(a, n) << endl;
	
	return 0;
}