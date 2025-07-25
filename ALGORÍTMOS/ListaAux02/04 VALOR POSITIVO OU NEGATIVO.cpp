#include <iostream>
using namespace std;
main()
{
	//Variaveis
	float valor;
	
	//Entrada
	cout << "informe algum valor: ";
	cin >> valor;
	
	//Processo e Saida
	if (valor > 0){
		cout << "O valor, " << valor << " eh positivo!";
	} else {
		cout << "o valor, " << valor << " eh negativo!";
	}
}
