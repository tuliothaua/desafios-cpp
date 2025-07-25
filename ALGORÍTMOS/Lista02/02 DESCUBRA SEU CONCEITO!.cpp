#include <iostream>
using namespace std;
main()
{
	//Configuração
		setlocale(LC_ALL, "Portuguese");
	
	//Variaveis
		int nota;
	
	//Entrada
		cout << "...Informe a sua nota: ";
		cin >> nota;
	
	//Processo e Sáida
		if ( nota >= 0 && nota < 40){
			
			cout << "\n=========================";
			cout << "\n - Conceito...: E ";
			cout << "\n - Sua Nota...: " << nota;
			cout << "\n=========================";
			
		} else if ( nota >= 40 && nota < 60){
			
			cout << "\n=========================";
			cout << "\n - Conceito...: D ";
			cout << "\n - Sua Nota...: " << nota;
			cout << "\n=========================";
			
		} else if ( nota >= 60 && nota < 76){
			
			cout << "\n=========================";
			cout << "\n - Conceito...: C ";
			cout << "\n - Sua Nota...: " << nota;
			cout << "\n=========================";
			
		} else if ( nota >= 76 && nota < 90){
			
			cout << "\n=========================";
			cout << "\n - Conceito...: B ";
			cout << "\n - Sua Nota...: " << nota;
			cout << "\n=========================";
			
		} else if ( nota >= 90 && nota <= 100){
			
			cout << "\n=========================";
			cout << "\n - Conceito...: A ";
			cout << "\n - Sua Nota...: " << nota;
			cout << "\n=========================";
			
		} else if ( nota > 100 || nota < 0){
			
			cout << "Valor Inválido";
		}
		
			//TúlioThauãDutra :D
}
