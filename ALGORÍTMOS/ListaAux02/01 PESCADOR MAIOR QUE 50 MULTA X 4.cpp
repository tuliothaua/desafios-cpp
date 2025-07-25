#include <iostream>
using namespace std;
main()
{
	float peso, valor;
	
	cout << "informe o peso: ";
	cin >> peso;
	
	if (peso > 50) {
		valor = (peso - 50) * 4;
		cout << "calma ai irmao, multa de: R$" << valor << ",00";
	} else {
		
		cout << "Ta de boa!";
	}
	
}
