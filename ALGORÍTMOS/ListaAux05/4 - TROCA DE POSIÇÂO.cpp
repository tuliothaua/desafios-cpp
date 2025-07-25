/*Construa um algoritmo que leia uma coleção X [1..20] e após troque o 1o elemento com o
20o; o 2o com o 19o; e assim por diante. Ao final, apresente X na tela.*/

#include <iostream>
using namespace std;
main()
{
	//Configurações
		setlocale(LC_ALL, "Portuguese");
		
	//Variáveis
		int x[20];
		int cont=19,aux;
		
	//Entrada
		for (int i = 0; i < 20 ; i++){
			cout << "Digite o valor na vetor[" << i + 1 << "]: ";
			cin >> x[i];
		}
		
	//Processo
		for (int i = 0; i < 10; i++){
			 aux = x[i]; 
			 x[i] = x[cont - i] ; 
			 x[cont - i] = aux; 
		}
		
		for (int i=0; i < 20; i++){
			cout << x[i] << endl;
		}

}
