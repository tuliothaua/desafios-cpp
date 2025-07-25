#include <iostream>
using namespace std;
main()
{
	//Variavel
	float altura, peso, pesoideal;
	string sexo;
	
	//Entrada
	cout << "informe a altura: ";
	cin >> altura;
	
	cout << "informe o peso: ";
	cin >> peso;
	
	cout << "informe o sexo digitando em letra MAIUSCULA, M ou F: ";
	cin >> sexo;
	
	//Processo e Saida
	if ( sexo == "M"){
		pesoideal = 72.7 * altura - 58;
		cout << "seu peso ideal eh: " << pesoideal;
	} else if (sexo == "F"){
		pesoideal = 62.1 * altura - 44.7;
		cout << "seu peso ideal eh: " << pesoideal;
	}
}
