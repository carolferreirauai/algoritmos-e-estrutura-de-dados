#include "hashing1.h"
#include <iostream>

using namespace std;

//função hash auxiliar
int hash_aux(int k, int m)
{
	int h; //hash aux

	h = k % m;//operação

	//resultado de h negativo soma com m
	if (h < 0)
	{
		h += m;
	}

	return h;
}

//função sondagem linear
int hash1(int k, int i, int m)
{
	   	int h1 = hash_aux(k, m); //função hash_aux
	   	int h2 = (h1 + i) % m; //operação
	   	return h2;
}
