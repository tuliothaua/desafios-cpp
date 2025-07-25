#include <iostream>
using namespace std;
main()
{
	// VARIAVEIS
	float cotacao, dolar, reais; 
	
	// ENTRADA
	cout << "Informe a cotacao do dolar: "; 
	cin >> cotacao;
	
	cout << "Informe o valor em dolar: ";
	cin >> dolar;
	
	// PROCESSO
	reais = cotacao * dolar;
	
	// SAIDA
	cout << "\n======================================";
	cout << "\nValor da cotacao do dolar: " << cotacao << ".";
	cout << "\nValor informado em US$: " << dolar << ".";
	cout << "\nValor convertido em R$: " << reais << ".";
	cout << "\n======================================";
	
	//TulioThauaDutra :D
}
