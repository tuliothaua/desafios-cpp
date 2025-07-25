#include <iostream>
using namespace std;
main()
{
	//VARIAVEIS
	int ano, mes, dia, anoatual, mesatual, diaatual, diasvividos;
	
	//ENTRADA
	cout << "\n===================================================";
	cout << "\n     - Descubra quantos dias voce ja viveu! -";
	cout << "\n===================================================";
	cout << endl;
	
	cout << "\n...Informe o ano da data de nascimento: ";
	cin >> ano;

	cout << "\n...Informe o mes da data de nascimento: ";
	cin >> mes;
	
	cout << "\n...Informe o dia da data de nascimento: ";
	cin >> dia;
	
	cout << "\n...Informe o ano da data atual: ";
	cin >> anoatual;

	cout << "\n...Informe o mes da data atual: ";
	cin >> mesatual;
	
	cout << "\n...Informe o dia da data atual: ";
	cin >> diaatual;
	
	//PROCESSO
	
	diasvividos = ((anoatual - ano) * 360) + ((mesatual - mes) * 30) + (diaatual - dia);

	//SAIDA
	
	cout << "\n===================================================";
	cout << "\n UAU voce tem: " << diasvividos << " dias vividos!!";
	cout << "\n===================================================";

	//TulioThauãDutra :D
}
