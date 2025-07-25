/*Faça um algoritmo que leia um vetor de 12 elementos com o nome dos meses por extenso.
Depois solicite ao usuário o número do mês e o algoritmo deverá escrever na tela o nome
do mês.*/

#include <iostream>
using namespace std;
main()
{
	//Configurações 
		setlocale(LC_ALL, "Portuguese");
		
	//Variáveis
		string vetor[12]={"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
		int questao = 0;	// 0		 //1		//3		 //4	  //5     //6	   //7		//8		   //9		   //10	      //11		  //12	
		
		
	//Entrada
		cout << "Digite o número do mês: ";
		cin >> questao;
		cout << endl;
		
	//Processo e Saída
		if (questao == 1){
			cout << vetor[0];  // Janeiro
		} else if (questao == 2){
			cout << vetor[1]; // Fevereiro
		} else if (questao == 3){
			cout << vetor[2]; // Março
		} else if (questao == 4){
			cout << vetor[3]; // Abril
		} else if (questao == 5){
			cout << vetor[4]; // Maio
		} else if (questao == 6){
			cout << vetor[5]; // Junho
		} else if (questao == 7){
			cout << vetor[6]; // Julho
		} else if (questao == 8){
			cout << vetor[7]; // Agosto
		} else if (questao == 9){
			cout << vetor[8]; // Setembro
		} else if (questao == 10){
			cout << vetor[9]; // Outubro
		} else if (questao == 11){
			cout << vetor[10]; // Novembro
		} else if (questao == 12){
			cout << vetor[11]; // Dezembro
		} else {
			cout << "Mês Invalido.";
		}
		
	//TúioThauãDutra :D
}
