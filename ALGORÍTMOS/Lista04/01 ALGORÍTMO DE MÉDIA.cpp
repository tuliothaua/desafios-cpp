#include <iostream>
using namespace std;
main()
{
	/*Quest�o 01:
		Construa um algoritmo que leia o nome e a nota de 15 alunos na prova de algoritmos e ao
		final apresente a m�dia das notas da turma. Se o usu�rio desejar encerrar a leitura antes dos
		15 alunos, o mesmo deve digitar �fim� para o nome.*/
	
	//Configura��es
		setlocale(LC_ALL, "Portuguese");
		
	//Var�aveis
		string nome = " ";
		float nota = 0, media = 0, soma = 0;
		int i = 0;
		
	//Entrada
		cout << "\n===================================";
		cout << "\n      - ALGOR�TMO DE M�DIA - ";
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
				cout << "\nops! nota inv�lida.";
				cout << "\nReinicie o programa.";
				return 0;
			}
		}
		
		media = soma / i;
		
	//Sa�da	
		cout << "\n- Quantidade de pessoas: " << i;
		cout << "\n- M�dia das notas: " << media;
		cout << "\n- Soma das notas: " << soma;
		cout << "\n===================================";
		
	//T�lioThau�Dutra :D
	
}
