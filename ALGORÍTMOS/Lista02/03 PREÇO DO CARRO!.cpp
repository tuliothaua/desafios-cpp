#include <iostream>
using namespace std;

main() {
	
    // Configurações
    	setlocale(LC_ALL, "Portuguese");
    
    // Variáveis
		int questao;
   		float preco_final, preco_inicial;
   		int valor1 = 500, valor2 = 2000, valor3 = 500, valor4 = 1000, valor5 = 2500;
   		string marca;
   		char pagamento;
    
    // Entrada
    	cout << "\n========================================";
    	cout << "\n       - Compra de Veículos - ";
    	cout << "\n========================================";
    
    	cout << "\n\n...Digite o preço inicial do veículo: ";  
    	cin >> preco_inicial;
    
   		cout << "\n...Qual é a marca do veículo: ";
    	cin >> marca;
    
   		system("cls");
    
    	cout << "\n===============================================";
   		cout << "\n          - Painel da marca " << marca << " - ";
   		cout << "\n===============================================";
    	cout << endl;
    
    // Opções de adicionais
    	cout << "\n - Digite um elemento que deseja adicionar -";
    
    	cout << "\n===============================================";
    	cout << "\n 1 - Vidro Elétrico................: R$ 500,00";
    	cout << "\n 2 - Ar Condicionado...............: R$ 2000,00";
    	cout << "\n 3 - Trava central e Alarme........: R$ 500,00";
    	cout << "\n 4 - Pintura Metálica..............: R$ 1000,00";
    	cout << "\n 5 - Direção Hidráulica............: R$ 2500,00";
    	cout << "\n===============================================";
    	cout << "\n - Preço recebido...........: " << preco_inicial;
    	cout << "\n===============================================";
    	cout << endl;
    
    	cout << "\n// Caso não queira adicionar mais nada digite 0.";
    	cout << endl;
    
    // Processo
    	cout << "\nDigite: "; 
    	cin >> questao;
    	cout << endl;
    
    	preco_final = preco_inicial;
    
    while (questao != 0) { // Estrutura de repetição : D
        switch (questao) {
            case 1: preco_final += valor1; break;
            case 2: preco_final += valor2; break;
            case 3: preco_final += valor3; break;
            case 4: preco_final += valor4; break;
            case 5: preco_final += valor5; break;
            default: cout << "\nOpção inválida!" << endl; break;
        }
        
        cout << "\n - Preço Final do Veículo R$: " << preco_final << endl;
        cout << " - Algo mais? \nDigite: ";
        cin >> questao;
    }
    
    // Pagamento
    	cout << "\nDeseja pagar à vista? (S/N): ";
    	cin >> pagamento;
    
    	if (pagamento == 'S' || pagamento == 's') {
        	preco_final *= 0.95;
        	cout << "\n - Pagamento à vista aplicado! Desconto de 5%.";
    }
    
    // Saída
    	cout << "\n - O Preço final do veículo é R$: " << preco_final;
    
    			//TúlioThauãDutra : D
}
