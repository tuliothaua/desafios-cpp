#include <iostream>
using namespace std;
main()
{
	//Configurações
		setlocale(LC_ALL, "Portuguese");
	
	//Variaveis
		string nome;
		float conta, diarias, total;
	
	//Entrada
		cout << "\n========================================";
		cout << "\n	 - Hotel Continental - ";
		cout << "\n========================================";
		cout << endl;
	
		cout << "\n...Informe o seu nome: ";
		cin >> nome;
	
		cout << "...Informe o número da conta: ";
		cin >> conta;
		
		cout << "...Informe o número de diárias: ";
		cin >> diarias;
		
	//Processo e Sáida
		if (diarias > 5){
		
			total = diarias * (60.00 + 5.50);
		
			cout << "\n========================================";
			cout << "\n - Nome................: " << nome;
			cout << "\n - Número da conta.....: " << conta;
			cout << "\n - Total...............: " << total; 
			cout << "\n========================================";
		
	} 	else if (diarias == 5){
		
			total = diarias * (60.00 + 7.00);
		
			cout << "\n========================================";
			cout << "\n - Nome................: " << nome;
			cout << "\n - Número da conta.....: " << conta;
			cout << "\n - Total...............: " << total; 
			cout << "\n========================================";
		
	} 	else if (diarias < 5) {
		
			total = diarias * (60 + 9.00);
			
			cout << "\n========================================";
			cout << "\n - Nome................: " << nome;
			cout << "\n - Número da conta.....: " << conta;
			cout << "\n - Total...............: " << total; 
			cout << "\n========================================";
		
	} 
	
			//TúlioThauãDutra :D
}
