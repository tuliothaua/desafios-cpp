#include <iostream>
using namespace std;
main ()
{
	/*Questão 05:
		Faça um algoritmo que simule um sistema de eleição para 20 eleitores. Nesse sistema
		existem 3 candidatos que são votados através de seus códigos. São eles:
		1 = Candidato 1;
		2 = Candidato 2;
		3 = Candidato 3;
		4 = Voto nulo;
		5 = Voto em branco;
		Elabore um algoritmo que calcule e escreva o total de votos e o percentual de votos para cada
		candidato, para os votos brancos e para os nulos. Ao final, Algoritmo também deverá escrever
		na tela o nome do vencedor da eleição.*/

	//Configurações
		setlocale(LC_ALL, "Portuguese");

	//Variáveis
		int voto_maior = 0, vencedor = 0;
		int questao, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
		int total_votos = 0;
		float percentual1, percentual2, percentual3, percentual_brancos, percentual_nulos;

	//Entrada
		cout << "\n============================================";
		cout << "\n            - ELEIÇÃO MAGNÍFICA -";
		cout << "\n============================================";

	//Processo
		for(int i = 1; i <= 20; i++){  // Corrigido: 20 eleitores
			cout << "\n--------------------------------------------";
			cout << "\n - Digite abaixo qual você deseja votar.";
			cout << "\n--------------------------------------------";
			cout << "\n(1-Candidato 1|2-Candidato 2|3-Candidato 3)\n";
			cout << "       (4-Voto Nulo| 5-Voto Branco)\n";
			cout << "\n...Vote: "; cin >> questao;

			if(questao == 1){
				cont1++;
			} else if (questao == 2){
				cont2++;
			} else if (questao == 3){
				cont3++;
			} else if (questao == 4){
				cont4++;
			} else if (questao == 5){
				cont5++;
			} else {
				cout << "\n- Candidato Inválido\n- Reinicie o programa.";
				return 0;
			}
		}

		total_votos = cont1 + cont2 + cont3 + cont4 + cont5;

		// Cálculo de percentuais
		percentual1 = (cont1 * 100.0) / total_votos;
		percentual2 = (cont2 * 100.0) / total_votos;
		percentual3 = (cont3 * 100.0) / total_votos;
		percentual_nulos = (cont4 * 100.0) / total_votos;
		percentual_brancos = (cont5 * 100.0) / total_votos;

		// Descobrir vencedor
		if(cont1 > cont2 && cont1 > cont3){
			vencedor = 1;
			voto_maior = cont1;
		} else if(cont2 > cont1 && cont2 > cont3){
			vencedor = 2;
			voto_maior = cont2;
		} else if(cont3 > cont1 && cont3 > cont2){
			vencedor = 3;
			voto_maior = cont3;
		} else {
			vencedor = 0; 
		}

	//Saída
		cout << "\n--------------------------------------------";
		cout << "\n- Total de votos: " << total_votos;
		cout << "\n- Percentual do Candidato 1: " << percentual1 << "%";
		cout << "\n- Percentual do Candidato 2: " << percentual2 << "%";
		cout << "\n- Percentual do Candidato 3: " << percentual3 << "%";
		cout << "\n- Percentual de Votos brancos: " << percentual_brancos << "%";
		cout << "\n- Percentual de Votos nulos: " << percentual_nulos << "%";
		cout << "\n--------------------------------------------";
		
		if(vencedor != 0){
			cout << "\n - - Vencedor: Candidato " << vencedor;
		}
		else {
			cout << "\n - - Resultado: Empate entre os candidatos.";
		}
		cout << "\n--------------------------------------------";
	
	//TúlioThauãDutra :D
	
}

