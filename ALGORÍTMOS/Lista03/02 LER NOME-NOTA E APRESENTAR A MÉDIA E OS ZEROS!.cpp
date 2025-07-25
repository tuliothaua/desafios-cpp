#include <iostream>
using namespace std;
main()
{
	/*Questão 02:
		Construa um algoritmo que leia o nome e a nota de 20 alunos e ao final informe a média da
		turma e se existe algum aluno com nota igual a 0 (zero).*/
	
	//Configurações
		setlocale(LC_ALL, "Portuguese");
		
	//Variáveis
		string nome;
		int cont0 = 0;
		float nota, media, soma = 0;
		
	//Entrada
		cout << "\n====================================================";	
		cout << "\n       - Algorítimo de nota-média de turma - "       ;
		cout << "\n====================================================";
		cout << endl;	
		
	//Processo
		for (int i=1; i <= 20; i++){
			
			cout << "\n...Informe o nome do " << i << "º aluno: ";
			cin >> nome;
			
			cout << "...Informe a nota do " << i << "º aluno: ";
			cin >> nota;
			
			soma += nota;
			
			if (nota == 0){
				
				cont0 ++;
				
			} 
			
			if (nota < 0 || nota > 10){
				cout << "\n- Nota Inválida";
			}
			
		}
		
			soma = soma / 20;
		
	//Saída
		cout << "\n- Total de Alunos com nota 0...: " << cont0;
		cout << "\n- Total da Média da nota.......: " << soma;			
}
