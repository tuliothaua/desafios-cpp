#include <iostream>
using namespace std;
main()
{
	//VARIAVEIS
	string nome;
	int salariofixo, comissaofixa, qntd;
	float valordasvendas, total, percentual;
	
	//ENTRADA
	cout << "\n=========================================================";
	cout << "\n        - Bem vindo ao Painel do Pica Pau Ltda -";
	cout << "\n=========================================================";
	cout << endl;
	cout << "\n...Digite o nome do vendedor: ";
	cin >> nome;
	
	cout << "\n...Quantos carros voce vendeu, " << nome << "? ";
	cin >> qntd;
	
	cout << "\n...Digite o valor total das vendas R$: ";
	cin >> valordasvendas;
	
	//PROCESSO
	salariofixo = 350;
	comissaofixa = 50 * qntd;
	percentual = 0.05 * valordasvendas;
	
	total = salariofixo + comissaofixa + percentual;
	
	
	
	//SAIDA
	cout << "\n=========================================================";
	cout << "\nNome do Vendedor....................: " << nome;
	cout << "\n---------------------------------------------------------";
	cout << "\nCarros Vendidos.....................: " << qntd;
	cout << "\n---------------------------------------------------------";
	cout << "\nValor total das vendas..............: " << valordasvendas;
	cout << "\n---------------------------------------------------------";
	cout << "\nSalario Total do vendedor...........: " << total;
	cout << "\n=========================================================";
	
	//TulioThauãDutra :D
}
