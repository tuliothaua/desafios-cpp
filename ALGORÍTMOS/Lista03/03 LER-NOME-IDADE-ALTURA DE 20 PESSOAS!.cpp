#include <iostream>
using namespace std;
main()
{
	/*Questão 03:
	Construa um algoritmo que leia o nome, a idade e a altura de 20 pessoas e ao final
	apresente:
	a) A média de idade das pessoas com mais de 1,80 de altura
	b) O total de pessoas com mais de 35 anos
	c) O nome do mais alto
	d) O nome do mais novo */
	
	//Configurações
		setlocale(LC_ALL, "Portuguese");
		
	//Variáveis
		string nome, nome_alto, nome_novo;
		int idade=0, cont35=0, cont180=0;
		int menor_idade = 999;
		float maior_altura = 0;
		float altura, media_180, soma;
	
	//Entrada
		cout << "\n=========================================";
		cout << "\n         - ALGORÍTIMO DOIDO -";
		cout << "\n=========================================";
		cout << endl;
		
		cout << "\n-----------------------------------------";
		
	//Processo
		for(int i=1; i <= 20; i++){
			
			
			cout << "\n...Informe o nome: ";
			cin >> nome;
			
			cout << "\n...Informe a idade: ";
			cin >> idade;
			
			cout << "\n...Informe a altura: ";
			cin >> altura;
			
			cout << "\n-----------------------------------------";
			
			if (idade > 35){
				cont35 ++;
			}
			
			if (altura > 1.79){
				soma += idade;
				cont180 ++;
			}
			
			if (idade < menor_idade){
				menor_idade = idade;
				nome_novo = nome;
			}
			
			if (altura > maior_altura ){
				maior_altura = altura;
				nome_alto = nome;
			}
		}
	
		if (cont180 > 0){
			media_180 = soma / cont180;
		} else {
			media_180 = 0;
		}
		
		
	//Saída
		cout << "\n-----------------------------------------";
		cout << "\n - Média de idade com > 1,80 de altura: " << media_180;
		cout << "\n - O total de pessoas > de 35 anos: " << cont35;
		cout << "\n - O nome do mais alto: " << nome_alto << " - Altura: " << maior_altura;
		cout << "\n - O nome do mais novo: " << nome_novo << " - Idade: " << menor_idade;
		cout << "\n-----------------------------------------";
		
	//TúlioThauãDutra :D
		
}
