#include <iostream>
using namespace std;
main()
{
	//Configurações
		setlocale(LC_ALL, "Portuguese");
		
	//Variaveis
		int num_reserva, qntd_hospedes, tipo_quarto, qntd_diarias;
		int qntd_servico_massagens;
		float valor_diaria, valor_massage, taxa_iss;
		float consumo_frigobar, consumo_bar, total, comissaobar, iss, taxa, taxa_base, valorma;
		string nome;
		
	//Entrada A
		cout << "\n===============================================";
		cout << "\n              - HOTEL SONO BOM - ";
		cout << "\n===============================================";
		
		cout << "\n\n-----------------------------------------------";
		cout << "\n #Informe o número da reserva: ";
		cout << "\n-----------------------------------------------";
		cout << "\n..Digite: "; cin >> num_reserva;
		cout << "-----------------------------------------------";
		cout << "\n #Informe o nome do responsável pela reserva: ";
		cout << "\n-----------------------------------------------";
		cout << "\n..Digite: "; cin >> nome;
		cout << "-----------------------------------------------";
		cout << "\n #Informe a quantidade de hóspedes: ";
		cout << "\n-----------------------------------------------";
		cout << "\n..Digite: "; cin >> qntd_hospedes;
		cout << "\n-----------------------------------------------";
		
	// ENTRADA B
		system("cls");
		
		cout << "\n===============================================";
		cout << "\n              - HOTEL SONO BOM - ";
		cout << "\n===============================================";
		cout << "\n-----------------------------------------------";
		cout << "\n #Informe a quantidade de diárias: ";
		cout << "\n-----------------------------------------------";
		cout << "\n..Digite: "; cin >> qntd_diarias;
		cout << "-----------------------------------------------";
		cout << "\n #Informe o valor consumido no frigobar: ";
		cout << "\n-----------------------------------------------";
		cout << "\n..Digite: "; cin >> consumo_frigobar;
		cout << "-----------------------------------------------";
		cout << "\n #Informe o número de serviço de massagens: ";
		cout << "\n-----------------------------------------------";
		cout << "\n..Digite: "; cin >> qntd_servico_massagens;
		cout << "-----------------------------------------------";
		cout << "\n #Informe o valor consumido do Bar: ";
		cout << "\n-----------------------------------------------";
		cout << "\n..Digite: "; cin >> consumo_bar;
		cout << "\n-----------------------------------------------";
			
	//ENTRADA C
		
		system("cls");
		
		cout << "\n===============================================";
		cout << "\n              - HOTEL SONO BOM - ";
		cout << "\n===============================================";
			
		cout << "\n #Informe o tipo de quarto: ";
		cout << "\n===============================================";
		cout << "\n 1 - Standard...: R$ 50,00  a diária";
		cout << "\n 2 - Luxo.......: R$ 80,00  a diária";
		cout << "\n 3 - VIP........: R$ 150,00 a diária";
		cout << "\n===============================================";
		cout << "\n\n..Digite: "; cin >> tipo_quarto;
		
		system("cls");
		cout << "\n===============================================";
		cout << "\n              - HOTEL SONO BOM - ";
		cout << "\n===============================================";
		
	// Processo
		switch(tipo_quarto){
    		case 1:
    			
      		if (qntd_hospedes > 0 && qntd_hospedes < 3) {
      		valor_diaria = 50.0;
            valor_massage = (qntd_servico_massagens > 3) ? 65.0 : 80.0;
            taxa_base = 12.0;
            
			  if (qntd_hospedes > 2 && qntd_hospedes < 5){
			valor_diaria = 50.0 + 20.00;
            valor_massage = (qntd_servico_massagens > 3) ? 65.0 : 80.0;
            taxa_base = 12.0;
			  	
			  } else if (qntd_hospedes > 5 ){
			valor_diaria = 50.0 + 40;
            valor_massage = (qntd_servico_massagens > 3) ? 65.0 : 80.0;
            taxa_base = 12.0;
			  }
	
            
            if (qntd_diarias < 5) {
                taxa_iss = 0.05;
            } else if (qntd_diarias < 10) {
                taxa_iss = 0.03;
            } else {
                taxa_iss = 0.01;
            }
            
            valorma = qntd_servico_massagens * valor_massage;
            comissaobar = consumo_bar * 0.10;
            total = (valor_diaria * qntd_diarias) + valorma + (comissaobar + consumo_bar) + taxa_base;
            taxa = total * taxa_iss;
            total += taxa;

            // Exibição do resultado
            cout << "\n - Número da reserva: " << num_reserva;
            cout << "\n - Nome do responsável: " << nome;
            cout << "\n - Tipo de quarto: Standard";
            cout << "\n - Número de dias: " << qntd_diarias;
            cout << "\n - Valor das diárias: R$ " << valor_diaria;
            cout << "\n - Valor total das massagens: R$ " << valorma;
            cout << "\n - Valor total do frigobar: R$ " << consumo_frigobar;
            cout << "\n - Valor total do serviço de bar: R$ " << (comissaobar + consumo_bar);
            cout << "\n - ISS: R$ " << taxa;
            cout << "\n - Conta Final: R$ " << total;
            cout << "\n===============================================";
        	}
       		 break;
       		 
       		 case 2:
       		 	
       		if (qntd_hospedes > 0 && qntd_hospedes < 3) {
      		valor_diaria = 80.0;
            valor_massage = (qntd_servico_massagens > 3) ? 65.0 : 80.0;
            taxa_base = 12.0;
            
			  if (qntd_hospedes > 2 && qntd_hospedes < 5){
			valor_diaria = 80.0 + 20.00;
            valor_massage = (qntd_servico_massagens > 3) ? 65.0 : 80.0;
            taxa_base = 12.0;
			  	
			  } else if (qntd_hospedes > 5 ){
			valor_diaria = 80.0 + 40;
            valor_massage = (qntd_servico_massagens > 3) ? 65.0 : 80.0;
            taxa_base = 12.0;
			  }
	
            
            if (qntd_diarias < 5) {
                taxa_iss = 0.05;
            } else if (qntd_diarias < 10) {
                taxa_iss = 0.03;
            } else {
                taxa_iss = 0.01;
            }
            
            valorma = qntd_servico_massagens * valor_massage;
            comissaobar = consumo_bar * 0.10;
            total = (valor_diaria * qntd_diarias) + valorma + (comissaobar + consumo_bar) + taxa_base;
            taxa = total * taxa_iss;
            total += taxa;

            // Exibição do resultado
            cout << "\n - Número da reserva: " << num_reserva;
            cout << "\n - Nome do responsável: " << nome;
            cout << "\n - Tipo de quarto: LUXO";
            cout << "\n - Número de dias: " << qntd_diarias;
            cout << "\n - Valor das diárias: R$ " << valor_diaria;
            cout << "\n - Valor total das massagens: R$ " << valorma;
            cout << "\n - Valor total do frigobar: R$ " << consumo_frigobar;
            cout << "\n - Valor total do serviço de bar: R$ " << (comissaobar + consumo_bar);
            cout << "\n - ISS: R$ " << taxa;
            cout << "\n - Conta Final: R$ " << total;
            cout << "\n===============================================";
        	}
        	
        	break;
       		 
       		case 3:
       			
       		if (qntd_hospedes > 0 && qntd_hospedes < 3) {
      		valor_diaria = 150.0;
            valor_massage = (qntd_servico_massagens > 3) ? 65.0 : 80.0;
            taxa_base = 12.0;
            
			  if (qntd_hospedes > 2 && qntd_hospedes < 5){
			valor_diaria = 150.0 + 20.00;
            valor_massage = (qntd_servico_massagens > 3) ? 65.0 : 80.0;
            taxa_base = 12.0;
			  	
			  } else if (qntd_hospedes > 5 ){
			valor_diaria = 150.0 + 40;
            valor_massage = (qntd_servico_massagens > 3) ? 65.0 : 80.0;
            taxa_base = 12.0;
			  }
	
            
            if (qntd_diarias < 5) {
                taxa_iss = 0.05;
            } else if (qntd_diarias < 10) {
                taxa_iss = 0.03;
            } else {
                taxa_iss = 0.01;
            }
            
            valorma = qntd_servico_massagens * valor_massage;
            comissaobar = consumo_bar * 0.10;
            total = (valor_diaria * qntd_diarias) + valorma + (comissaobar + consumo_bar) + taxa_base;
            taxa = total * taxa_iss;
            total += taxa;

            // Exibição do resultado
            cout << "\n - Número da reserva: " << num_reserva;
            cout << "\n - Nome do responsável: " << nome;
            cout << "\n - Tipo de quarto: Standard";
            cout << "\n - Número de dias: " << qntd_diarias;
            cout << "\n - Valor das diárias: R$ " << valor_diaria;
            cout << "\n - Valor total das massagens: R$ " << valorma;
            cout << "\n - Valor total do frigobar: R$ " << consumo_frigobar;
            cout << "\n - Valor total do serviço de bar: R$ " << (comissaobar + consumo_bar);
            cout << "\n - ISS: R$ " << taxa;
            cout << "\n - Conta Final: R$ " << total;
            cout << "\n===============================================";
        	}
        	
        	break;
       		
       		default: 
       		cout << "\nvalor inválido, escolha o tipo de quarto entre: 1 e 3!";
       		

   
}

	
		
	
}
