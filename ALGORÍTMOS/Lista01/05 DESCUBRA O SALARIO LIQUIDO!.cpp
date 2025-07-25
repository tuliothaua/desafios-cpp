#include <iostream>
using namespace std;
main()
{
	//VARIAVEIS
	string nome;
	float salariobru, desprevidencia, desimposto, salarioliquido, cal1, cal2;
	
	//ENTRADA
	cout << "\n===================================================";
	cout << "\n  -- Bem Vindo ao descubra seu salario liquido --"  ;
	cout << "\n===================================================";
	cout << endl;
	
	cout << "\n...Informe o seu nome: ";
	cin >> nome;
	
	cout << "\n...Informe o seu salario bruto: ";
	cin >> salariobru;
	
	//PROCESSO
	desprevidencia = salariobru * 0.10;
    cal1 = salariobru - desprevidencia;
	
	desimposto = cal1 * 0.25;
	salarioliquido = cal1 - desimposto;
	
	//SAIDA
	
	cout << "\n===================================================";
	cout << "\n---------------------------------------------------";
	cout << "\n * Nome do funcionario........: " << nome;
	cout << "\n---------------------------------------------------";
	cout << "\n * Salario bruto..............: R$" << salariobru;
	cout << "\n---------------------------------------------------";
	cout << "\n * Desconto Previdencia de 10%: R$" << desprevidencia;
	cout << "\n---------------------------------------------------";
	cout << "\n * Desconto de IR de 25%......: R$" << desimposto;
	cout << "\n---------------------------------------------------";
	cout << "\n * Salario Liquido............: R$" << salarioliquido;
	cout << "\n---------------------------------------------------";
	cout << "\n===================================================";
	
	//TulioThauãDutra :D
}
