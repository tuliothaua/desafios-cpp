#include <iostream>
using namespace std;
main()
{
	/*Quest�o 02:
		Construa um algoritmo que leia o nome e a nota de 20 alunos e ao final informe a m�dia da
		turma e se existe algum aluno com nota igual a 0 (zero).*/
	
	//Configura��es
		setlocale(LC_ALL, "Portuguese");
		
	//Vari�veis
		string nome;
		int cont0 = 0;
		float nota, media, soma = 0;
		
	//Entrada
		cout << "\n====================================================";	
		cout << "\n       - Algor�timo de nota-m�dia de turma - "       ;
		cout << "\n====================================================";
		cout << endl;	
		
	//Processo
		for (int i=1; i <= 20; i++){
			
			cout << "\n...Informe o nome do " << i << "� aluno: ";
			cin >> nome;
			
			cout << "...Informe a nota do " << i << "� aluno: ";
			cin >> nota;
			
			soma += nota;
			
			if (nota == 0){
				
				cont0 ++;
				
			} 
			
			if (nota < 0 || nota > 10){
				cout << "\n- Nota Inv�lida";
			}
			
		}
		
			soma = soma / 20;
		
	//Sa�da
		cout << "\n- Total de Alunos com nota 0...: " << cont0;
		cout << "\n- Total da M�dia da nota.......: " << soma;			
}
