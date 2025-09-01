#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double raiz (double x, double x0, double e)
{
	if (abs(pow(x0,2)-x) <= e) //condição parada && abs = deixa o número positivo
		return x0;
	else //chamada recursiva
		return raiz(x,((pow(x0, 2)+x)/(2*x0)),e);
}
int main()
{
	//declarar variáveis
	double x; //o número do qual se quer calcular a raiz.
	double x0; // uma estimativa inicial para raiz(x)
	double e; // um limitante superior para o erro.
	
	//entrada de dados
	cin >> x >> x0 >> e;
	
	//saída de dados
	cout << fixed << setprecision(4) << raiz(x, x0, e) << endl;
	return 0;
}