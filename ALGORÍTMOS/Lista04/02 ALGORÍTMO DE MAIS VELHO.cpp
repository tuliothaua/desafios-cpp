#include <iostream>
using namespace std;
main()
{
	/*Questão 02:
		Construa um algoritmo que leia o nome e a idade de vários alunos de uma turma e ao final
		apresente na tela o nome e a idade do aluno mais velho. Como o número de alunos é
		indeterminado, faça com que para parar a leitura dos nomes e idades, o usuário tenha que
		digitar 0 (zero) para a idade.*/
	
	//Configurações
		setlocale(LC_ALL, "Portuguese");
		
	//Varíaveis
		string nome = "", nome_mais_velho = "Matusalém";
		int idade = 1, idade_mais_velho = 0;
	
	//Entrada
		cout << "\n=====================================";
		cout << "\n      - ALGORÍTMO DE MAIS VELHO -";
		cout << "\n=====================================";
		cout << "\n-------------------------------------";
		cout << "\n//Caso queria terminar - 0 para idade";
		cout << "\n-------------------------------------";
		
		
	//Processo
		while(idade != 0){
			
			if (idade != 0){
				cout << "\n..Informe o nome: ";
				cin >> nome;
				
				cout << "..Informe a idade: ";
				cin >> idade;
			}
			
			if (idade > idade_mais_velho){
				idade_mais_velho = idade;
				nome_mais_velho = nome;
			}
			
		}
		
		if (idade_mais_velho == 0){
			idade_mais_velho = 969;
		}
		
	//Saída
		cout << "\n=====================================";
		cout << "\n- Nome do mais velho: " << nome_mais_velho;
		cout << "\n- Idade do mais velho: " << idade_mais_velho << " anos.";
		cout << "\n=====================================";
		
		
	//TúlioThauãDutra :D
	
}
