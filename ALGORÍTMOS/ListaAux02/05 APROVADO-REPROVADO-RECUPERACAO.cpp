#include <iostream>
using namespace std;
main()
{
	//Configura��o
	setlocale(LC_ALL, "Portuguese");
	
	//Variaveis
	float nota;
	
	//Entrada
	cout << "informe a nota: ";
	cin >> nota;
	
	//Processo e Saida
	if (nota > 10){
		cout << "Valor Inv�lido!"; 
	} else if (nota < 0){
		cout << "Valor Inv�lido!";
	} else if (nota >= 7){
		cout << "Voc� foi Aprovado!";
	} else if (nota < 5){
		cout << "Voc� foi Reprovado!";
	} else if (nota  >= 5){
		cout << "Voc� est� de recupera��o!";
	}
	
}
