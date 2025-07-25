#include <iostream>
using namespace std;
main()
{
	// Configurações
	setlocale(LC_ALL, "Portuguese");
	
	//Variaveis
	float x,y,z;
	
	//Entrada
	cout << "Verificador de um Triângulo!" << endl;
	
	cout << "\n...Informe a largura: ";
	cin >> x;
	
	cout << "\n...Informe a altura: ";
	cin >> y;
	
	cout << "\n...Informe a profundidade: ";
	cin >> z;
	
	//Processo e Saída
	if ( x + y > z && x + z > y && y + z > x){ // ..linha 24.. verifica se é um triangulo!				 
		if (x == z && z == y){
			cout << "\n - forma um: Triângulo Equilátero.";
		} else if (x == y || z == y || x == z){
			cout << "\n - forma um: Triângulo Isóscele.";
		} else if (x != y && y != z && x != z){
			cout << "\n - Forma um: Triângulo Escaleno.";
		}
	} else {
		cout << "\n...Valor Inválido, não forma um Triângulo!";
	}
	
}
