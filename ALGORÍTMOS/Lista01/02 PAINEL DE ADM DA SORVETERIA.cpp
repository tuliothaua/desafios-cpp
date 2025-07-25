#include <iostream>
using namespace std;
main()
{
	// VARIAVEIS
	float picole1, picole2, picole3, total1, total2, total3, arrecadou;
	int qntd1, qntd2, qntd3;
	
	// ENTRADA
	cout << "Bem vindo ao ADM Sorveteria, \ninforme a quantidade vendida do picole de tipo 1: "; 
	cin >> qntd1;
	
	cout << "Agora, informe a quantidade vendida do picole de tipo 2: "; 
	cin >> qntd2;
	
	cout << "e por fim, informe a quantidade vendida do picole de tipo 3: "; 
	cin >> qntd3;
	
	// PROCESSO
	picole1 = 0.50;
	picole2 = 0.60;
	picole3 = 0.75;
	
	total1 = picole1 * qntd1; 
	total2 = picole2 * qntd2;
	total3 = picole3 * qntd3;
	
	arrecadou = total1 + total2 + total3;
	
	// SAIDA
	cout << "\n==============================================";
	cout << "\nValor do Picole de TIPO 1...R$: " << picole1 << "0." << endl;
	cout << "\nQuantidade Vendida..........: " << qntd1 << " Vezes." << endl;
	cout << "\nTotal Vendido...............R$: " << total1 << "." << endl;
	cout << "\n----------------------------------------------";
	cout << "\nValor do Picole de TIPO 2...R$: " << picole2 << "0." << endl;
	cout << "\nQuantidade Vendida..........: " << qntd2 << " Vezes." << endl;
	cout << "\nTotal Vendido...............R$: " << total2 << "." << endl;
	cout << "\n----------------------------------------------";
	cout << "\nValor do Picole de TIPO 3...R$: " << picole3 << "." << endl;
	cout << "\nQuantidade Vendida..........: " << qntd3 << " Vezes." << endl;
	cout << "\nTotal Vendido...............R$: " << total3 << "." << endl;
	cout << "\n===============================================";
	cout << "\nTotal arrecadado R$: " << arrecadou;
	cout << "\n===============================================";
	
	//TulioThauaDutra :D

}
