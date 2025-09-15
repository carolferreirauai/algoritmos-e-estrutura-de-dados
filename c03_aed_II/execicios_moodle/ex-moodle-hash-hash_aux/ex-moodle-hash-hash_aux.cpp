#include "hashing.h"
#include <iostream>

using namespace std;

int main() 
{
   int k, m; //declarar variaveis

   cin >> k >> m; //entrada de dados

   while (k != 0 && m != 0) //enquanto k e m forem diferentes de 0
    {
         cout << hash_aux(k, m) << endl; //saida de dados
         cin >> k >> m; //entrada de novos dados
    }

    return 0;
}