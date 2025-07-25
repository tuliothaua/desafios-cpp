/*Escreva um algoritmo que leia o nome, idade e sexo de 5 pessoas e imprima:
a) Idade Média das pessoas
b) Nome da pessoa mais jovem
c) Nome do homem mais velho*/

#include <iostream>
using namespace std;
main()
{
	//Configurações
		setlocale(LC_ALL, "Portuguese");
		
	//Varíaveis
		int idade[5], idade_velha=-1, idade_nova=100;
		string nome[5], nome_jovem, nome_velho, sexo[5];
		int media=0, soma=0;
		
	//Entrada e Processo
		for (int i = 0; i < 5; i++){
			cout << "\nDigite o nome da [" << i + 1 << "] pessoa: ";
			cin >> nome[i];
			
			cout << "Digite a idade da [" << i + 1 << "] pessoa: ";
			cin >> idade[i];
			
			
			if (idade[i] > idade_velha){
				nome_velho = nome[i];
				idade_velha = idade[i];
			} 
				if (idade[i] < idade_nova){
				nome_jovem = nome[i];
				idade_nova = idade[i];
			}
			
			cout << "Digite o sexo da [" << i + 1 << "] pessoa: ";
			cin >> sexo[i];
			
			soma += idade[i];	
		}
		
	//Saída
		media = soma / 5;
		cout << "\na) Idade Média das Pessoas: " << media;
		cout << "\nb) Nome da pessoa mais jovem: " << nome_jovem;
		cout << "\nc) Nome da pessoa mais velha: " << nome_velho;
	
	//TúlioThauãDutra :D
}
