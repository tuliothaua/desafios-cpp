/*Faça um algoritmo que leia um vetor de N elementos inteiros e transforme para 0 (zero)
todos os elementos negativos do vetor. Ao final, apresente o vetor.*/

#include <iostream>
using namespace std;
main()
{
	//Configurações
		setlocale(LC_ALL, "Portuguese");
		
	//Variáveis
		int vetor[100];
		int i=0;
		char stop;
		
	//Entrada
		do {
        cout << "Digite o valor do elemento [" << i + 1 << "]: ";
        cin >> vetor[i];
		if (vetor[i] < 0){
			vetor[i] = 0;
		}  i++;

        cout << "Deseja continuar? (S/N): ";
        cin >> stop;  cout << endl;

    } while (stop != 'N' && stop != 'n');

	//Processo e Saída
	 for (int j=0; j < i; j++){
	 	
	 	cout << "Valor do elemento do vetor na posição vetor[" << j << "]: " << vetor[j] << " " << endl; 
	 }
	
	//TúlioThauãDutra :D
}
