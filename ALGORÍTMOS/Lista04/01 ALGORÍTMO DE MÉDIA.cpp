#include <iostream>
using namespace std;
main()
{
	/*Questão 01:
		Construa um algoritmo que leia o nome e a nota de 15 alunos na prova de algoritmos e ao
		final apresente a média das notas da turma. Se o usuário desejar encerrar a leitura antes dos
		15 alunos, o mesmo deve digitar “fim” para o nome.*/
	
	//Configurações
		setlocale(LC_ALL, "Portuguese");
		
	//Varíaveis
		string nome = " ";
		float nota = 0, media = 0, soma = 0;
		int i = 0;
		
	//Entrada
		cout << "\n===================================";
		cout << "\n      - ALGORÍTMO DE MÉDIA - ";
		cout << "\n===================================";
		cout << endl;
		
		cout << "\n-----------------------------------";
		cout << "\n//Caso deseja terminar digite 'fim'";
		cout << "\n-----------------------------------";
		
	//Processo
		while(nome != "fim" && i < 15){
			
			
			cout << "\n...Informe o nome: ";
			cin >> nome;
			
			if (nome != "fim"){
				cout << "...Informe a nota: ";
				cin >> nota;
				i++;
				soma += nota;
			}
			
			if(nota < 0 || nota > 10){
				cout << "\nops! nota inválida.";
				cout << "\nReinicie o programa.";
				return 0;
			}
		}
		
		media = soma / i;
		
	//Saída	
		cout << "\n- Quantidade de pessoas: " << i;
		cout << "\n- Média das notas: " << media;
		cout << "\n- Soma das notas: " << soma;
		cout << "\n===================================";
		
	//TúlioThauãDutra :D
	
}
