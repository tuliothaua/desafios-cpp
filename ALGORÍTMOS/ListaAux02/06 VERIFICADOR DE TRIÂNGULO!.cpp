#include <iostream>
using namespace std;
main()
{
	// Configura��es
	setlocale(LC_ALL, "Portuguese");
	
	//Variaveis
	float x,y,z;
	
	//Entrada
	cout << "Verificador de um Tri�ngulo!" << endl;
	
	cout << "\n...Informe a largura: ";
	cin >> x;
	
	cout << "\n...Informe a altura: ";
	cin >> y;
	
	cout << "\n...Informe a profundidade: ";
	cin >> z;
	
	//Processo e Sa�da
	if ( x + y > z && x + z > y && y + z > x){ // ..linha 24.. verifica se � um triangulo!				 
		if (x == z && z == y){
			cout << "\n - forma um: Tri�ngulo Equil�tero.";
		} else if (x == y || z == y || x == z){
			cout << "\n - forma um: Tri�ngulo Is�scele.";
		} else if (x != y && y != z && x != z){
			cout << "\n - Forma um: Tri�ngulo Escaleno.";
		}
	} else {
		cout << "\n...Valor Inv�lido, n�o forma um Tri�ngulo!";
	}
	
}
