#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double raiz (double x, double x0, double e)
{
	if (abs(pow(x0,2)-x) <= e) //condi��o parada && abs == +
		return x0;
	else //chamada recursiva
		return raiz(x,((pow(x0, 2)+x)/(2*x0)),e);
}
int main()
{
	//declarar vari�veis
	double x; //� o n�mero do qula se uqer calcular a raiz.
	double x0; // � uma estimativa inicial para raiz(x)
	double e; //� um limitante superior para o erro.
	
	//entrada de dados
	cin >> x >> x0 >> e;
	
	//saida de dados
	cout << fixed << setprecision(4) << raiz(x, x0, e) << endl;
	return 0;
}