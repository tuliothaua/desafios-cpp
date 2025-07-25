#include <iostream>
using namespace std;
main()
{
	//Configurações
		setlocale(LC_ALL, "Portuguese");
		
	//Variaveis
		string matricula;
		float consumo, valor, descontar, imposto;
		int classe;
		
		
	//Entrada
		cout << "\n===============================================";
		cout << "\n               - Painel CASAN -";
		cout << "\n===============================================";
		
		cout << "\n\n..Digite a sua matricula: ";
		cin >> matricula;
		
		cout << "\n..Digite o número de m3 consumidos: ";
		cin >> consumo;
		
		cout << "\n===============================================";
		cout << "\n Escolha o que corresponde a sua classe.";
		cout << "\n\n 1 - Residencial. ";
		cout << "\n 2 - Comercial. ";
		cout << "\n 3 - Industrial. ";
		cout << "\n===============================================";
		cout << "\n..Digite: "; cin >> classe;
		
	//Processo
		switch(classe){
				case 1: 
					//RESIDENCIAL
						//Regras
					if (consumo > 0 && consumo <= 10){
						valor = consumo * 2.99;
						imposto = (valor * 0.65) + (valor * 0.03);
						valor += imposto + 5.00;
						
					} else if (consumo > 10 && consumo <= 25){
						descontar = (consumo - 10) * 2.99;
						valor = ((consumo - 10) * 5.48) + descontar + 5.00;
						imposto = (valor * 0.65) + (valor * 0.03);
						valor += imposto;
						
					} else if (consumo >= 26 && consumo <= 50){
						descontar = ((consumo - 10) * 2.99) + (consumo - 25 ) * 5.48;
						valor = ((consumo - 35) * 7.69) + descontar + 5.00; 
						imposto = (valor * 0.65) + (valor * 0.03);
						valor += imposto;
						
					} else if (consumo > 50){
						descontar = ((consumo - 10) * 2.99) + ((consumo - 25) * 5.48)
						+ ((consumo - 50) * 7.69);
						valor = ((consumo - 50) * 9.22) + descontar + 5.00;
						imposto = (valor * 0.65) + (valor * 0.03);
						valor += imposto;
		
					} else if (consumo < 0){
						cout << "\n - Valor de consumo inválido";
					}
					
					cout << "\n===============================================";
					cout << "\n - Sua Matrícula: " << matricula;
					cout << "\n - Sua Classe: Residencial";
					cout << "\n - O valor do Saneamento básico R$: 5.00";
					cout << "\n - O valor do PIS com o COFINS R$: " << imposto;
					cout << "\n - O valor total da conta R$: " << valor;
					cout << "\n===============================================";
					
					break;
				
				case 2:
					//Comercial
						//Regras
					if (consumo > 0 && consumo <= 10){
						valor = consumo * 2.99;
						imposto = (valor * 0.65) + (valor * 0.03);
						valor += imposto + 10.00;
						
					} else if (consumo > 10 && consumo <= 25){
						descontar = (consumo - 10) * 2.99;
						valor = ((consumo - 10) * 5.48) + descontar + 10.00;
						imposto = (valor * 0.65) + (valor * 0.03);
						valor += imposto;
						
					} else if (consumo >= 26 && consumo <= 50){
						descontar = ((consumo - 10) * 2.99) + (consumo - 25 ) * 5.48;
						valor = ((consumo - 35) * 7.69) + descontar + 10.00; 
						imposto = (valor * 0.65) + (valor * 0.03);
						valor += imposto;
						
					} else if (consumo > 50){
						descontar = ((consumo - 10) * 2.99) + ((consumo - 25) * 5.48)
						+ ((consumo - 50) * 7.69);
						valor = ((consumo - 50) * 9.22) + descontar + 10.00;
						imposto = (valor * 0.65) + (valor * 0.03);
						valor += imposto;
		
					} else if (consumo < 0){
						cout << "\n - Valor de consumo inválido";
					}
					
					cout << "\n===============================================";
					cout << "\n - Sua Matrícula: " << matricula;
					cout << "\n - Sua Classe: Comercial";
					cout << "\n - O valor do Saneamento básico R$: 10.00";
					cout << "\n - O valor do PIS com o COFINS R$: " << imposto;
					cout << "\n - O valor total da conta R$: " << valor;
					cout << "\n===============================================";
				
		
				break;
				case 3:
					//Industrial
						//Regras
					if (consumo > 0 && consumo <= 10){
						valor = consumo * 2.99;
						imposto = (valor * 0.65) + (valor * 0.03);
						valor += imposto + 15.00;
						
					} else if (consumo > 10 && consumo <= 25){
						descontar = 10 * 2.99;
						valor = ((consumo - 10) * 5.48) + descontar + 15.00;
						imposto = (valor * 0.65) + (valor * 0.03);
						valor += imposto;
						
					} else if (consumo >= 26 && consumo <= 50){
						descontar = (10 * 2.99) + (25 * 5.48);
						valor = ((consumo - 25) * 7.69) + descontar + 15.00; 
						imposto = (valor * 0.65) + (valor * 0.03);
						valor += imposto;
						
					} else if (consumo > 50){
						descontar = ( 10 * 2.99) + ( 25 * 5.48) + (50 * 7.69);
						valor = ((consumo - 50) * 9.22) + descontar + 15.00;
						imposto = (valor * 0.65) + (valor * 0.03);
						valor += imposto;
		
					} else if (consumo < 0){
						cout << "\n - Valor de consumo inválido";
					}
					
					cout << "\n===============================================";
					cout << "\n - Sua Matrícula: " << matricula;
					cout << "\n - Sua Classe: Industrial";
					cout << "\n - O valor do Saneamento básico R$: 15.00";
					cout << "\n - O valor do PIS com o COFINS R$: " << imposto;
					cout << "\n - O valor total da conta R$: " << valor;
					cout << "\n===============================================";
				break;
				
				default: {
					
					cout << "Valor da Classe Inválida!";
					break;
				}
			}
			//Saída
				//TúlioThauãDutra :D
}
