#include <iostream>
using namespace std;

main() {
	
    // Configura��es
    	setlocale(LC_ALL, "Portuguese");
    
    // Vari�veis
		int questao;
   		float preco_final, preco_inicial;
   		int valor1 = 500, valor2 = 2000, valor3 = 500, valor4 = 1000, valor5 = 2500;
   		string marca;
   		char pagamento;
    
    // Entrada
    	cout << "\n========================================";
    	cout << "\n       - Compra de Ve�culos - ";
    	cout << "\n========================================";
    
    	cout << "\n\n...Digite o pre�o inicial do ve�culo: ";  
    	cin >> preco_inicial;
    
   		cout << "\n...Qual � a marca do ve�culo: ";
    	cin >> marca;
    
   		system("cls");
    
    	cout << "\n===============================================";
   		cout << "\n          - Painel da marca " << marca << " - ";
   		cout << "\n===============================================";
    	cout << endl;
    
    // Op��es de adicionais
    	cout << "\n - Digite um elemento que deseja adicionar -";
    
    	cout << "\n===============================================";
    	cout << "\n 1 - Vidro El�trico................: R$ 500,00";
    	cout << "\n 2 - Ar Condicionado...............: R$ 2000,00";
    	cout << "\n 3 - Trava central e Alarme........: R$ 500,00";
    	cout << "\n 4 - Pintura Met�lica..............: R$ 1000,00";
    	cout << "\n 5 - Dire��o Hidr�ulica............: R$ 2500,00";
    	cout << "\n===============================================";
    	cout << "\n - Pre�o recebido...........: " << preco_inicial;
    	cout << "\n===============================================";
    	cout << endl;
    
    	cout << "\n// Caso n�o queira adicionar mais nada digite 0.";
    	cout << endl;
    
    // Processo
    	cout << "\nDigite: "; 
    	cin >> questao;
    	cout << endl;
    
    	preco_final = preco_inicial;
    
    while (questao != 0) { // Estrutura de repeti��o : D
        switch (questao) {
            case 1: preco_final += valor1; break;
            case 2: preco_final += valor2; break;
            case 3: preco_final += valor3; break;
            case 4: preco_final += valor4; break;
            case 5: preco_final += valor5; break;
            default: cout << "\nOp��o inv�lida!" << endl; break;
        }
        
        cout << "\n - Pre�o Final do Ve�culo R$: " << preco_final << endl;
        cout << " - Algo mais? \nDigite: ";
        cin >> questao;
    }
    
    // Pagamento
    	cout << "\nDeseja pagar � vista? (S/N): ";
    	cin >> pagamento;
    
    	if (pagamento == 'S' || pagamento == 's') {
        	preco_final *= 0.95;
        	cout << "\n - Pagamento � vista aplicado! Desconto de 5%.";
    }
    
    // Sa�da
    	cout << "\n - O Pre�o final do ve�culo � R$: " << preco_final;
    
    			//T�lioThau�Dutra : D
}
