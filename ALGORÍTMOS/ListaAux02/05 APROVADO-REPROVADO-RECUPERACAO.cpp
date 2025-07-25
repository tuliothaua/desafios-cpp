#include <iostream>
using namespace std;
main()
{
	//Configuração
	setlocale(LC_ALL, "Portuguese");
	
	//Variaveis
	float nota;
	
	//Entrada
	cout << "informe a nota: ";
	cin >> nota;
	
	//Processo e Saida
	if (nota > 10){
		cout << "Valor Inválido!"; 
	} else if (nota < 0){
		cout << "Valor Inválido!";
	} else if (nota >= 7){
		cout << "Você foi Aprovado!";
	} else if (nota < 5){
		cout << "Você foi Reprovado!";
	} else if (nota  >= 5){
		cout << "Você está de recuperação!";
	}
	
}
