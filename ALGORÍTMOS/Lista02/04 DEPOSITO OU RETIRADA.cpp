#include <iostream>
using namespace std;
main()
{	
	//Configura��es
		setlocale(LC_ALL, "Portuguese");
	
	//Variaveis
		int numero, operacao;
		float saldo, resultado, valor;
	
	//Entrada
		cout << "\n===========================";
		cout << "\n  - Banco do Brasileiro -";
		cout << "\n===========================";
		
		cout << "\n\n...Numero da conta: ";
		cin >> numero;
		
		cout << "\n...Seu saldo R$: ";
		cin >> saldo;
		
		cout << "\n # Qual opera��o deseja realizar: ";
		cout << "\n 1 - Deposito ";
		cout << "\n 2 - Retirada ";
		cout << endl;
		cout << "\n...Digite: "; cin >> operacao;
		
	//Processo e S�ida
		switch(operacao){
			case 1: 
				cout << "\n===========================";
				cout << "\n - Deseja depositar quanto?: ";
				cout << "\n...Digite: "; cin >> valor;
				resultado = saldo + valor;
				cout << "\n===========================";			
				cout << "\n - N�mero da Conta: " << numero;
				cout << "\n - Seu saldo antigo: " << saldo;
				cout << "\n - Seu novo saldo R$: " << resultado;
				break;
			
			case 2:
				cout << "\n===========================";
				cout << "\n - Deseja retirar quanto?: ";
				cout << "\n...Digite "; cin >> valor;
				resultado = saldo - valor;
				if (resultado < 0){
					cout << "\n===========================";
					cout << "\n - N�mero da Conta: " << numero;
					cout << "\n - Seu saldo antigo: " << saldo;
					cout << "\n - Vish, Conta estourada!!!";
					cout << "\n - Seu  novo saldo R$: " << resultado;
				} else {
					cout << "\n===========================";
					cout << "\n - N�mero da Conta: " << numero;
					cout << "\n - Seu saldo antigo: " << saldo;
					cout << "\n - Seu novo saldo R$: " << resultado;
				}
				break;
			
			default: {
				cout << "\nOpera��o Inv�lida!";
				break;
			}
		}
			
		// S�ida
			cout << "\n===========================";
			
		//T�lioThau�Dutra :D
}
