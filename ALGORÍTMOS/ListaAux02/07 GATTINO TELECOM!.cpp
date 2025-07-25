#include <iostream>
using namespace std;
main()
{
	//Configurações
	setlocale(LC_ALL, "Portuguese");
	
	//Variaveis
	int servico;
	string nome;
	float pulsos, interurbanos, valor, valor2;
	int telefone;
	
	//Entrada
	cout << "\n\t=========================================";
	cout << "\n\t     - Bem vindo ao Gattino Telecom - ";
	cout << "\n\t========================================="; 
	cout << endl;
	
	cout << "\n...Informe o número de telefone: ";
	cin >> telefone;
	
	cout << "...Informe o seu nome: ";
	cin >> nome;
	
	cout << "...Informe os interurbanos em (horas): ";
	cin >> interurbanos;
	
	cout << "...Informe a quantidade de pulsos: ";
	cin >> pulsos;
	cout << endl;
	
	cout << "==========================================";
	cout << "\n  - Informe Qual Serviço deseja usar -";
	cout << "\n	1 - Telefone Residêncial";
	cout << "\n	2 - Telefone Comercial";
	cout << "\n========================================";
	cout << "\nEscolha: "; cin >> servico; 
	cout << endl;


	
	//Processo e Sáida
	switch (servico){
		case 1: 
		
			if (pulsos > 90){
				
			interurbanos = (interurbanos * 60) * 0.50;
			valor = (pulsos - 90) * 0.07;
			valor = valor + 17.20 + interurbanos;
			valor2 = valor * 0.12;
			valor += valor2;
			
				cout << "\n=======================================================";
				cout << "\n - Número de Telefone.............: " << telefone;
				cout << "\n - Nome do Consumidor.............: " << nome;
				cout << "\n - Número de Pulsos Registrados...: " << pulsos;
				cout << "\n - Total de Interurbanos..........: " << interurbanos;
				cout << "\n - Tipo de telefone...............: " << servico;
				cout << "\n - O valor total é................: " << valor;
				cout << "\n=======================================================";
			
			} else {
				
				interurbanos = (interurbanos * 60) * 0.50;
				valor = valor + 17.20 + interurbanos;
				valor2 = valor * 0.12;
				valor += valor2;
				
				cout << "\n=======================================================";		
				cout << "\n - Número de Telefone.............: " << telefone;
				cout << "\n - Nome do Consumidor.............: " << nome;
				cout << "\n - Número de Pulsos Registrados...: " << pulsos;
				cout << "\n - Total de Interurbanos..........: " << interurbanos;
				cout << "\n - Tipo de telefone...............: " << servico;
				cout << "\n - O valor total é................: " << valor;
				cout << "\n=======================================================";
					
			}
			
		break;
		
		case 2:
			
			if (pulsos > 90){
			interurbanos = (interurbanos * 60) * 0.50;
			valor = (pulsos - 90) * 0.07;
			valor = valor + 25.80 + interurbanos;
			valor2 = valor * 0.12;
			valor += valor2;
			
				cout << "\n=======================================================";		
				cout << "\n - Número de Telefone.............: " << telefone;
				cout << "\n - Nome do Consumidor.............: " << nome;
				cout << "\n - Número de Pulsos Registrados...: " << pulsos;
				cout << "\n - Total de Interurbanos..........: " << interurbanos;
				cout << "\n - Tipo de telefone...............: " << servico;
				cout << "\n - O valor total é................: " << valor;
				cout << "\n=======================================================";
				
			} else {
				
				interurbanos = (interurbanos * 60) * 0.50;
				valor = valor + 25.80 + interurbanos;
				valor2 = valor * 0.12;
				valor += valor2;
				
				cout << "\n=======================================================";		
				cout << "\n - Número de Telefone.............: " << telefone;
				cout << "\n - Nome do Consumidor.............: " << nome;
				cout << "\n - Número de Pulsos Registrados...: " << pulsos;
				cout << "\n - Total de Interurbanos..........: " << interurbanos;
				cout << "\n - Tipo de telefone...............: " << servico;
				cout << "\n - O valor total é................: " << valor;
				cout << "\n=======================================================";	
			}
		
		break;
		
		default:
			cout << "Valor inválido, por favor digite 1 ou 2!";
			break;
	}
	
}
