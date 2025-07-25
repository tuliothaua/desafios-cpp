#include <iostream>
using namespace std;
main()
{
	/*Questão 05:
		Construa um algoritmo que leia o nome, o sexo e o salário de vários funcionários de uma
		empresa. Ao final, o algoritmo deve apresentar qual sexo possui a maior média salarial. Para
		definir o sexo utilize a legenda: ‘M’ para masculino, ‘F’ para feminino e ‘X’ para encerrar a
		leitura dos dados. */
		
	//Configurações
		setlocale(LC_ALL, "Portuguese");
		
	//Variáveis
		string nome = "Nothing";
		char sexo = 'I', media_vencedora = 'E';
		float salario = 0;
		float media_mulheres =0, soma_mulheres =0;
		float media_homens = 0, soma_homens = 0;
		int cont_homem = 0, cont_mulher = 0;
		
	//Entrada
		cout << "\n===============================================================";
		cout << "\n                  - ALGORÍTMO DE EMPRESA -"    ;
		cout << "\n===============================================================";
		
		cout << "\n---------------------------------------------------------------";
		cout << "\n                 //Para finalizar digite 'X'   ";
		cout << "\n---------------------------------------------------------------";
		
		cout << "\n........Informe o sexo (M- MASC| F - FEM): ";
		cin >> sexo;
		
	//Processo
		while(sexo != 'X'  && sexo != 'x'){
			
			if (sexo != 'X' && sexo != 'x'){
		
			cout << "........Informe o nome: ";
			cin >> nome;
			
			cout << "........Informe o salário R$: ";
			cin >> salario;
			
			if (sexo == 'm' || sexo == 'M'){
				soma_homens += salario;
				cont_homem ++;
			} else if (sexo == 'F' || sexo == 'f'){
				soma_mulheres += salario;
				cont_mulher++;
			} 
			
			}
			
			cout << "\n........Informe o sexo (M- MASC| F - FEM): ";
			cin >> sexo;
		}
		
			if(cont_homem != 0){
				media_homens = ((float)soma_homens / cont_homem);
			}
			
			if (cont_mulher != 0){
				media_mulheres = ((float)soma_mulheres / cont_mulher);
			}
			
			if (media_homens > media_mulheres){
				media_vencedora = 'M';
			} else if (media_mulheres > media_homens){
				media_vencedora = 'F';
			} 
			
			if (media_homens != media_homens){
				media_homens = 0;
			}
			if (media_mulheres != media_mulheres){
				media_mulheres = 0;
			}
		
		
		
		
	//Sáida
		cout << "\n======================RESULTADO FINAL==========================";
		cout << "\n - O sexo que possui a maior média salarial é: " << media_vencedora;
		cout << "\n - Média Homens: " << media_homens << " %";
		cout << "\n - Média Mulheres: " << media_mulheres << " %";
		cout << "\n===============================================================";
	//TúlioThauãDutra :D
}
