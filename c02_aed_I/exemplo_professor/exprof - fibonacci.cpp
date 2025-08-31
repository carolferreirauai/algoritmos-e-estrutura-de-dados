#include <iostream>
using namespace std;

int fib(int n)
{
	
	if (n == 0 | n == 1} //condição de parada
		return 1;
	else //chamada recursiva
		return fib (n-1) + fib (n-2);
}
int main()
{
	
	return 0;
}
