#include <iostream>
using namespace std;
main()
{
	float totalvendas, salario, c1, c2;
	string nome;
	
	cout << "informe o nome: ";
	cin >> nome;
	
	cout << "informe o total de vendas: ";
	cin >> totalvendas;
	
	if (totalvendas >= 20000 ) {
		c1 = totalvendas * 0.1;
		salario = totalvendas + c1;
		cout << "Olá, " << nome << " Seu salario final: R$" << salario;
		
	} else {
		c2 = totalvendas * 0.075;
		salario = totalvendas + c2;
		cout << "Olá, " << nome << " Seu salario final: R$" << salario;
	}
	
}
