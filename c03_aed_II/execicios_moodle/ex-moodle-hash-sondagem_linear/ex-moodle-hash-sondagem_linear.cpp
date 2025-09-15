#include "hashing1.h"
#include <iostream>

using namespace std;

int main()
{
	//declarar variáveis
	int k, m; //k - constante e m - quantidade de vetor
	int i; //posição

	cin >> k >> m; //entrada de valores

	//possível posição
	for(i = 0; i < m; i++)
	{
        cout << hash1(k, i, m) << endl; //chamar função hash1
	}
	
	return 0;
}