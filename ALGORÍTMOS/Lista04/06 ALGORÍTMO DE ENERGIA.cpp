#include <iostream>
using namespace std;

main()
{
	/* Questão 06:
		Simula o cálculo de consumo de energia por categoria:
		1 - Residencial, 2 - Comercial, 3 - Industrial.
		Para cada consumidor são lidos:
		- Número do consumidor
		- Quantidade de kWh consumidos
		- Tipo de consumidor
		O programa termina quando o número do consumidor for 0.
	*/

	//Configurações
		setlocale(LC_ALL, "Portuguese"); 

	// Variáveis
		string categoria_mais;
		int numero_consumidor = 777; 
		int tipo=777;
		float qntd_kwh_consumidos=777;
		float custo_individual = 0;
		float custo_total1 = 0, custo_total2 = 0, custo_total3 = 0;
		float consumo1 = 0, consumo2 = 0, consumo3 = 0;

	// Entrada
		cout << "\n==============================================";
		cout << "\n      - ALGORÍTMO DE EMPRESA DE ENERGIA -";
		cout << "\n==============================================";

		cout << "\n(1 - Residencial |2 - Comercial |3 - Industrial)";
		cout << "\n         //Para finalizar digite '0'";
		cout << "\n----------------------------------------------";

	// Processo
		while (numero_consumidor != 0) {
		cout << "\n...Informe o número do consumidor: ";
		cin >> numero_consumidor;

		if (numero_consumidor == 0) {
			break; // Encerra o laço se for zero
		}

		cout << "...Informe a quantidade de kWh consumidos: ";
		cin >> qntd_kwh_consumidos;

		cout << "...Informe o tipo de consumidor (1, 2 ou 3): ";
		cin >> tipo;

		if (tipo == 1) {
			custo_individual = qntd_kwh_consumidos * 0.3;
			custo_total1 += custo_individual;
			consumo1 += qntd_kwh_consumidos;
		}
		else if (tipo == 2) {
			custo_individual = qntd_kwh_consumidos * 0.5;
			custo_total2 += custo_individual;
			consumo2 += qntd_kwh_consumidos;
		}
		else if (tipo == 3) {
			custo_individual = qntd_kwh_consumidos * 0.7;
			custo_total3 += custo_individual;
			consumo3 += qntd_kwh_consumidos;
		}
		else {
			cout << "- Tipo inválido!\n";
			continue;
		}

		// Saída por consumidor
		cout << "\n> Custo total para o consumidor " << numero_consumidor << ": R$" << custo_individual;
	}

	if (consumo1 > consumo2 && consumo1 > consumo3) {
		categoria_mais = "Residencial";
	}
	else if (consumo2 > consumo1 && consumo2 > consumo3) {
		categoria_mais = "Comercial";
	}
	else if (consumo3 > consumo1 && consumo3 > consumo2) {
		categoria_mais = "Industrial";
	}
	else {
		categoria_mais = "Empate";
	}

	//Saída 
		cout << "\n\n========= RELATÓRIO FINAL =========";
		cout << "\na) Custos totais por categoria:";
		cout << "\n - Residencial: R$" << custo_total1;
		cout << "\n - Comercial:   R$" << custo_total2;
		cout << "\n - Industrial:  R$" << custo_total3;

		cout << "\n\nb) Consumo total por categoria:";
		cout << "\n - Residencial: " << consumo1 << " kWh";
		cout << "\n - Comercial:   " << consumo2 << " kWh";
		cout << "\n - Industrial:  " << consumo3 << " kWh";

		cout << "\n\nc) Categoria que mais consumiu: " << categoria_mais;
		cout << "\n==============================================";

	//TúlioThauãDutra :D
}

