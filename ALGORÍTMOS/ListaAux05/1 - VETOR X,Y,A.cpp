#include <iostream>
using namespace std;
main()
{
	//Configura��es
		setlocale(LC_ALL, "Portuguese");
		
	//Vari�veis
		int x[5], y[5], a[5];
	
	//Entrada
		/* Lendo os valores do X */
		for (int i = 0; i < 5; i++){
			cout << "Digite o valor de X[" << i + 1 << "]: ";
			cin >> x[i];
		} 
		
		cout << endl;
		
		/* Lendo os valores do Y */
		for (int i = 0; i < 5; i++){
			cout << "Digire o valor de Y[" << i + 1 << "]: ";
			cin >> y[i];
		}
	
	//Processo e Sa�da
		/* Exbindo os Dados A*/
		for (int i = 0; i < 5; i++){	
			a[i] = x[i] + y[i];
			cout << "\n\nO Resultado da soma de: " << x[i] << " + " << y[i] << " �: " << a[i];
			cout << endl;
		}
		
	
}
