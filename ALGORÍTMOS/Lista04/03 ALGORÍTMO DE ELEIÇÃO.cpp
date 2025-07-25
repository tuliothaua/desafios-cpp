#include <iostream>
using namespace std;
main()
{
	/*Questão 03:
		Construa um algoritmo que simule uma eleição. Essa eleição possui 3 candidatos. O algoritmo
		deve ler o voto de um número indeterminado de eleitores e apresentar na tela o percentual
		de cada candidato.
		Para votar no candidato 1 utilize a entrada ‘1’
		Para votar no candidato 2 utilize a entrada ‘2’
		Para votar no candidato 3 utilize a entrada ‘3’
		Para encerrar a leitura dos votos utilize a entrada ‘0’ */
		
	//Configurações
		setlocale(LC_ALL, "Portuguese");
	
	//Varíaveis
		int i=0;
		int cont01=0, cont02=0, cont03=0;
		float percentual01=0, percentual02=0, percentual03=0;
		int voto=1;
		
	//Entrada
		cout << "\n======================================";
		cout << "\n       - ALGORÍTMO DE ELEIÇÃO -       ";
		cout << "\n======================================";
		
		cout << "\n--------------------------------------";
		cout << "\n   //Caso queria terminar digite 0  ";
		cout << "\n--------------------------------------";
		
	//Processo
		while(voto != 0){
			
			if(voto != 0){
				cout << "\n   - Vote em alguns dos candidatos: ";
				cout << "\n (1 - Cand 1 | 2 - Cand2 | 3 - Cand3) ";
				cout << endl;

				cout << "\n..Digite: "; cin >> voto;
				
				if (voto == 1){
					cont01++;
					i++;
				} else if (voto == 2){
					cont02++;
					i++;
				} else if (voto == 3){
					cont03++;
					i++;
					
				} else if (voto > 3 || voto < 0) {
					cout << "\n\n- Voto inválido.";
				}
			}
		}
		
		percentual01 = ((float)cont01 / i) * 100;
		percentual02 = ((float)cont02 / i) * 100;
		percentual03 = ((float)cont03 / i) * 100;
		
	//Saída
		cout << "\n\n========== RESULTADO FINAL ===========";
		cout << "\n - Percentual do Candidato 1: " << percentual01 << "%";
		cout << "\n - Percentual do Candidato 2: " << percentual02 << "%";
		cout << "\n - Percentual do Candidato 3: " << percentual03 << "%";
		cout << "\n======================================";
		
	//TúlioThauãDutra :D
}
