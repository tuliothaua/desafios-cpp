/*Fa�a um algoritmo que leia um vetor de 12 elementos com o nome dos meses por extenso.
Depois solicite ao usu�rio o n�mero do m�s e o algoritmo dever� escrever na tela o nome
do m�s.*/

#include <iostream>
using namespace std;
main()
{
	//Configura��es 
		setlocale(LC_ALL, "Portuguese");
		
	//Vari�veis
		string vetor[12]={"Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
		int questao = 0;	// 0		 //1		//3		 //4	  //5     //6	   //7		//8		   //9		   //10	      //11		  //12	
		
		
	//Entrada
		cout << "Digite o n�mero do m�s: ";
		cin >> questao;
		cout << endl;
		
	//Processo e Sa�da
		if (questao == 1){
			cout << vetor[0];  // Janeiro
		} else if (questao == 2){
			cout << vetor[1]; // Fevereiro
		} else if (questao == 3){
			cout << vetor[2]; // Mar�o
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
			cout << "M�s Invalido.";
		}
		
	//T�ioThau�Dutra :D
}
