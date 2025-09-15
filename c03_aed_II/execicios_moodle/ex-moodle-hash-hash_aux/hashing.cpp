#include <iostream>

using namespace std;

//função hash auxiliar
int hash_aux(int k, int m)
{
    int h; //hash auxiliar
    
    h = k % m; //calcula o hash

    //se o hash for negativo, ele somaram o m para ficar positivo
    if (h < 0) 
    {
        h += m;
    }

    return h;
}