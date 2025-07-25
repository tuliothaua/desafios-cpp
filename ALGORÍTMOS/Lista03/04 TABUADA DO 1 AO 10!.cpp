#include <iostream>
using namespace std;
main()
{
	/*Questão 04:
		Construa um algoritmo que calcule e apresente na tela a tabuada completa do número 1 ao
		10. */
	
	//Configurações
		setlocale(LC_ALL, "Portuguese");
	
	//Varíaveis
		float cal1, cal2, cal3, cal4, cal5;
		float cal6, cal7, cal8, cal9, cal10;
		char questao;
		
	//Entrada
		cout << "\n================================";
		cout << "\n       - Tabuada do 1 - ";
		cout << "\n================================";
		cout << endl;
		
	//Processo
		for (int i = 0; i <= 10; i++){
			
		    cal1 = i * 1;
		    cout << endl;
			cout << "          " << i << " X 1 : " << cal1 << endl;
			
		}
		
	//Entrada B
		cout << "\n--------------------------------";
		cout << "\n - Deseja Ver a tabuáda do 2?";
		cout << "\n (S - Sim | N - Não) ";
		cin >> questao;
	
	//Processo B
		if (questao == 's' || questao == 'S') {
		cout << "\n================================";
		cout << "\n       - Tabuada do 2 - ";
		cout << "\n================================";
		} else {
			cout << "\n - Ok, até logo!";
			return 0;
		}
		
		for (int i = 0; i <= 10; i++){
			
		    cal2 = i * 2;
		    cout << endl;
			cout << "          " << i << " X 2 : " << cal2 << endl;
	}

	//Entrada C
		cout << "\n--------------------------------";
		cout << "\n - Deseja Ver a tabuáda do 3?";
		cout << "\n (S - Sim | N - Não) ";
		cin >> questao;
		
	//Processo C
		if (questao == 's' || questao == 'S') {
		cout << "\n================================";
		cout << "\n       - Tabuada do 3 - ";
		cout << "\n================================";
		} else {
			cout << "\n - Ok, até logo!";
			return 0;
		}
		
		for (int i = 0; i <= 10; i++){
			
		    cal3 = i * 3;
		    cout << endl;
			cout << "          " << i << " X 3 : " << cal3 << endl;
	}

	//Entrada D
		cout << "\n--------------------------------";
		cout << "\n - Deseja Ver a tabuáda do 4?";
		cout << "\n (S - Sim | N - Não) ";
		cin >> questao;
		
	//Processo D
		if (questao == 's' || questao == 'S') {
		cout << "\n================================";
		cout << "\n       - Tabuada do 4 - ";
		cout << "\n================================";
		} else {
			cout << "\n - Ok, até logo!";
			return 0;
		}
		
		for (int i = 0; i <= 10; i++){
			
		    cal4 = i * 4;
		    cout << endl;
			cout << "          " << i << " X 4 : " << cal4 << endl;
	}
	
	//Entrada E
		cout << "\n--------------------------------";
		cout << "\n - Deseja Ver a tabuáda do 5?";
		cout << "\n (S - Sim | N - Não) ";
		cin >> questao;
		
	//Processo E
		if (questao == 's' || questao == 'S') {
		cout << "\n================================";
		cout << "\n       - Tabuada do 5 - ";
		cout << "\n================================";
		} else {
			cout << "\n - Ok, até logo!";
			return 0;
		}
		
		for (int i = 0; i <= 10; i++){
			
		    cal5 = i * 5;
		    cout << endl;
			cout << "          " << i << " X 5 : " << cal5 << endl;
	}
	
	//Entrada F
		cout << "\n--------------------------------";
		cout << "\n - Deseja Ver a tabuáda do 6?";
		cout << "\n (S - Sim | N - Não) ";
		cin >> questao;
		
	//Processo F
		if (questao == 's' || questao == 'S') {
		cout << "\n================================";
		cout << "\n       - Tabuada do 6 - ";
		cout << "\n================================";
		} else {
			cout << "\n - Ok, até logo!";
			return 0;
		}
		
		for (int i = 0; i <= 10; i++){
			
		    cal6 = i * 6;
		    cout << endl;
			cout << "          " << i << " X 6 : " << cal6 << endl;
	}
	
	//Entrada G
		cout << "\n--------------------------------";
		cout << "\n - Deseja Ver a tabuáda do 7?";
		cout << "\n (S - Sim | N - Não) ";
		cin >> questao;
		
	//Processo G
		if (questao == 's' || questao == 'S') {
		cout << "\n================================";
		cout << "\n       - Tabuada do 7 - ";
		cout << "\n================================";
		} else {
			cout << "\n - Ok, até logo!";
			return 0;
		}
		
		for (int i = 0; i <= 10; i++){
			
		    cal7 = i * 7;
		    cout << endl;
			cout << "          " << i << " X 7 : " << cal7 << endl;
	}
	
	//Entrada H
		cout << "\n--------------------------------";
		cout << "\n - Deseja Ver a tabuáda do 8?";
		cout << "\n (S - Sim | N - Não) ";
		cin >> questao;
		
	//Processo H
		if (questao == 's' || questao == 'S') {
		cout << "\n================================";
		cout << "\n       - Tabuada do 8 - ";
		cout << "\n================================";
		} else {
			cout << "\n - Ok, até logo!";
			return 0;
		}
		
		for (int i = 0; i <= 10; i++){
			
		    cal8 = i * 8;
		    cout << endl;
			cout << "          " << i << " X 8 : " << cal8 << endl;
	}
	
	//Entrada I
		cout << "\n--------------------------------";
		cout << "\n - Deseja Ver a tabuáda do 9?";
		cout << "\n (S - Sim | N - Não) ";
		cin >> questao;
		
	//Processo I
		if (questao == 's' || questao == 'S') {
		cout << "\n================================";
		cout << "\n       - Tabuada do 9 - ";
		cout << "\n================================";
		} else {
			cout << "\n - Ok, até logo!";
			return 0;
		}
		
		for (int i = 0; i <= 10; i++){
			
		    cal9 = i * 9;
		    cout << endl;
			cout << "          " << i << " X 9 : " << cal9 << endl;
	}
	
	//Entrada J
		cout << "\n--------------------------------";
		cout << "\n - Deseja Ver a tabuáda do 10?";
		cout << "\n (S - Sim | N - Não) ";
		cin >> questao;
		
	//Processo J
		if (questao == 's' || questao == 'S') {
		cout << "\n================================";
		cout << "\n       - Tabuada do 10 - ";
		cout << "\n================================";
		} else {
			cout << "\n - Ok, até logo!";
			return 0;
		}
		
		for (int i = 0; i <= 10; i++){
			
		    cal10 = i * 10;
		    cout << endl;
			cout << "          " << i << " X 10 : " << cal10 << endl;
	}
	
	//Sáida
		cout << "\n- Obrigado por usar o meu programa.";
	
	//TúlioThauãDutra :D
}

