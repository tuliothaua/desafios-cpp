#include <iostream>
using namespace std;
main()
{
	
	/* Questão 01:
		Faça um algoritmo que leia o nome e o sexo de 10 pessoas e ao final apresente o total de
		homens e o total de mulheres.*/

	//Configurações
		setlocale(LC_ALL, "Portuguese");

	//Variáveis
		int conth=0, contm=0;
		string nome;
		char sexo;
		
	//Processo
		for(int i = 0; i <= 10; i++){
			cout << "\n...Informe o nome: ";
			cin >> nome;
			
			cout << "...Informe o sexo (M-Masculino| F-Feminino):";
			cin >> sexo;
			
			if (sexo != 'm' && sexo != 'M' && sexo != 'F' && sexo != 'f'){
				cout << "\n- Sexo Inválido";
				
			} else if (sexo == 'M' || sexo == 'm'){
				conth ++;
			}
			
			if (sexo == 'F' || sexo == 'f'){
				contm ++;
			}
			
		}
		
	//Saída
		cout << "\n - Total de Homens: " << conth;
		cout << "\n - Total de Mulheres: " << contm;
		
	//TúlioThauãDutra :D
		
}

