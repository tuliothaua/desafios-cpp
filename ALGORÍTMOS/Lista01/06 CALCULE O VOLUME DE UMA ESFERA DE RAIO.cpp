#include <iostream>
using namespace std;
main()
{
	//VARIAVEIS
	double raio, cal, vol;
	
	//ENTRADA
	
	cout << "\n===================================================";
	cout << "\n    - Calcule o volume de uma esfera de RAIO -   ";
	cout << "\n===================================================";
	cout << endl;
	
	cout << "\n...Informe o raio: ";
	cin >> raio;
	
	//PROCESSO
	
	vol = (4 * 3.1416 * raio * raio * raio) / 3;
	
	//SAIDA
	cout << "\n===================================================";
	cout << "\n * O volume de uma esfera de raio eh: " << vol << "!";
	cout << "\n===================================================";
	
	//TulioThauãDutra :D
}


