#include <iostream>
using namespace std;
main()
{
	//VARIÁVEIS
	string marca;
	float kmi, kmf, litros, consumo;
	
	//ENTRADA
	cout << "\n===================================================="; // Primeira Parte apresentando o painel.
	cout << "\n - Bem vindo ao Painel de Consumo de um Automovel - ";
	cout << "\n====================================================";
	cout << endl;
	
	cout << "\n...Informe a marca do veiculo: ";
	cin >> marca;
	
	system("cls"); // limpando acima :D
	
	cout << "\n================================================"   ;   // Segunda Parte Mudando para o painel com o nome.
	cout << "\n   - Bem vindo ao Painel da marca " << marca << " -";
	cout << "\n================================================"   ;
	cout << endl; 
	
	cout << "\n    ---Preencha os dados corretamente---";
	cout << endl;
	
	cout << "\n...Informe a quilometragem inicial: ";
	cin >> kmi;
	
	cout << "\n...Informe a quilometragem final: "  ;
	cin >> kmf;
	
	cout << "\n...Informe os litros consumidos: "   ;
	cin >> litros;
	
	//PROCESSO
	
	consumo = (kmf - kmi) / litros; // Calculando.......
	
	//SAÍDA
	
	cout << "\n================================================";
	cout << "\n------------------------------------------------";
	cout << "\n * Quilometragem Inicial......: " << kmi;
	cout << "\n------------------------------------------------";
	cout << "\n * Quilometragem Final........: " << kmf;
	cout << "\n------------------------------------------------";
	cout << "\n * Litros consumidos..........: " << litros;
	cout << "\n------------------------------------------------";
	cout << "\n================================================";
	cout << "\n ----------------|Consumo Total|----------------";
	cout << "\n                    |" << consumo << "|Km/L|"    ;			
	cout << "\n================================================";
	
	//TulioThauãDutra :D
}
