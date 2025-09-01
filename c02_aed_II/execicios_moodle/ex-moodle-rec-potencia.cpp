#include <iostream>
#include <cmath>

using namespace std;

int potencia (int a, int n)
{
	if (n == 0) //condiçãoo parada
		return 1;
	else //chamada recursiva
		return a * potencia(a, n-1);
}

int main()
{
	//declarar variáveis
	int a; //base
	int n; 
	
	//entrada de dados
	cin >> a >> n;
	
	//saída de dados
	cout << potencia(a, n) << endl;
	
	return 0;
}