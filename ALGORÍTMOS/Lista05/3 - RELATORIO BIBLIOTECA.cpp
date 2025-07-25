/*A UNIPLAC decidiu fazer um invent�rio dos itens (livros e revistas) da biblioteca. Para isso,
voc� foi convocado para desenvolver o sistema.

Fa�a um algoritmo que leia o nome do item, o ano da publica��o, o valor (pre�o) e o tipo do
documento (livro ou revista) em estruturas de vetores, e:
a) Calcule e informe a m�dia de valores (pre�os) de todos os livros;
b) Verifique se h� algum livro ou revista chamada �Algoritmos para Experts� no acervo,
e caso positivo mande uma mensagem ao usu�rio confirmando a presen�a deste;
c) Calcule a m�dia de idade dos livros e das revistas, e informe qual tipo de documento
possui a maior m�dia de idade;
d) Verifique e apresente todos os dados do item mais caro e do item mais barato;
e) Informe o nome e o valor do item mais recente de todo o acervo, e se este � livro ou
revista.
Obs. 1: A quantidade de itens � indeterminada, ou seja, para que o processo de leitura dos
dados dos itens termine, o usu�rio deve digitar a palavra �FIM� quando for ler a vari�vel
nome.
Obs. 2: Utilize um primeiro la�o de repeti��o para a etapa de leitura dos dados.
Posteriormente resolva cada um dos itens com outros la�os de repeti��o.*/

#include <iostream>
using namespace std;
main()
{
	//Configura��es
		setlocale(LC_ALL, "Portuguese");
		
	//Vari�veis
		string nome_item[100], tipo_documento[100], nome_item_barato="VAZIO", nome_item_caro="VAZIO", tipo_item_barato="VAZIO", tipo_item_caro="VAZIO";
		string nome_item_recente="VAZIO", tipo_item_recente="VAZIO";
		int ano_publicacao[100], cont_dos_itens=0, qntd_livros=0, qntd_revista=0, media_idade_livros=0, media_idade_revista=0;
		float preco_item[100], soma_livros=0,soma_revista=0, soma_idade_livros=0, soma_idade_revista=0, preco_item_recente;
		float media_livro=0, media_revista=0, preco_mais_barato=777, preco_mais_caro=0;
		int ano_item_barato=0, ano_item_caro=0, ano_recente=0;
		bool encontrado = false;
		
	//Entrada
		cout << "\n===================================================================";
		cout << "\n                       - BIBLIOTECA UNIPLAC -                      ";
		cout << "\n===================================================================";
		
			
		// Leitura do nome
			cout << "\n-------------------------------------------------------------------";
	   		cout << "\n...Adicione pelo menos 1 item para finalizar, com 'fim'";
			cout << "\n...Digite o nome do Item -- contagem [" << cont_dos_itens + 1 << "]: ";
	   		
	    	cin.ignore(); // para limpar buffer antes da primeira leitura
			getline(cin, nome_item[cont_dos_itens]);

	    while (nome_item[cont_dos_itens] != "FIM" && nome_item[cont_dos_itens] != "fim") {

        	
        	do { // Leitura do Ano da Publica��o 
        	cout << "-------------------------------------------------------------------";
            cout << "\n...Digite o Ano da Publica��o -- contagem [" << cont_dos_itens + 1 << "]: ";
            cin >> ano_publicacao[cont_dos_itens];
            cout << "-------------------------------------------------------------------";

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "\n...........[Entrada Inv�lida! Digite um n�mero inteiro]............\n";
                ano_publicacao[cont_dos_itens] = -1; // for�a repetir
                continue;
            }

            if (ano_publicacao[cont_dos_itens] > 2025) {
                cout << "\n.....................[Nem chegamos l�, MALUCO!]....................\n";
            } else if (ano_publicacao[cont_dos_itens] < 0) {
                cout << "\n.............[Voc� t� procurando Pergaminho ou Livros?]............\n";
            }
			 
       		} while (ano_publicacao[cont_dos_itens] < 0 || ano_publicacao[cont_dos_itens] > 2025);

			do {// leitura do Valor (Pre�o)
				cout << "\n...Digite o Valor -- contagem [" << cont_dos_itens + 1 << "] R$: ";
				cin >> preco_item[cont_dos_itens];
				cout << "-------------------------------------------------------------------";
				
				if (cin.fail()) {
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "\n...........[Entrada Inv�lida! Digite um n�mero inteiro]............";
					cout << "\n-------------------------------------------------------------------";
					preco_item[cont_dos_itens] = - 1;
					continue;
				}
				
				if(preco_item[cont_dos_itens] < 0){
					cout << "\n.............[Esse pre�o � novo? digite certo, MULA!]..............";
					cout << "\n-------------------------------------------------------------------";
				}
				
				} while (preco_item[cont_dos_itens] < 0);
					
			do {// Leitura do Tipo (Livro ou Revista)
				
				cout << "\n...Digite o Tipo do Documento (Livro|Revista) -- cont [" << cont_dos_itens + 1 << "]: ";
				cin >> tipo_documento[cont_dos_itens];
				cout << "-------------------------------------------------------------------";
				
				if (tipo_documento[cont_dos_itens] != "Livro" && 
        			tipo_documento[cont_dos_itens] != "livro" && 
        			tipo_documento[cont_dos_itens] != "Revista" && 
       				tipo_documento[cont_dos_itens] != "revista" &&
					tipo_documento[cont_dos_itens] != "REVISTA" && 
      				tipo_documento[cont_dos_itens] != "LIVRO") 
    			{
        			cout << "\n.....................[N�o existe este Documento!]..................";
        			cout << "\n-------------------------------------------------------------------";
    			}
				
				} while(tipo_documento[cont_dos_itens] != "Livro" && 
     				tipo_documento[cont_dos_itens] != "livro" && 
     				tipo_documento[cont_dos_itens] != "Revista" && 
      				tipo_documento[cont_dos_itens] != "revista" &&
					tipo_documento[cont_dos_itens] != "REVISTA" && 
      				tipo_documento[cont_dos_itens] != "LIVRO");
				
				//Somando o Pre�o
				if(tipo_documento[cont_dos_itens] == "LIVRO"){
					soma_livros += preco_item[cont_dos_itens];
					qntd_livros++;
					soma_idade_livros += ano_publicacao[cont_dos_itens];
				} else if(tipo_documento[cont_dos_itens] == "Livro"){
					soma_livros += preco_item[cont_dos_itens];
					qntd_livros++;
					soma_idade_livros += ano_publicacao[cont_dos_itens];
				} else if (tipo_documento[cont_dos_itens] == "livro"){
					soma_livros += preco_item[cont_dos_itens];
					qntd_livros++;
					soma_idade_livros += ano_publicacao[cont_dos_itens];
				} else if (tipo_documento[cont_dos_itens] == "REVISTA"){
					soma_revista += preco_item[cont_dos_itens];
					qntd_revista++;
					soma_idade_revista += ano_publicacao[cont_dos_itens];
				} else if (tipo_documento[cont_dos_itens] == "Revista"){
					soma_revista += preco_item[cont_dos_itens];
					qntd_revista++;
					soma_idade_revista += ano_publicacao[cont_dos_itens];
				} else if (tipo_documento[cont_dos_itens] == "revista"){
					soma_revista += preco_item[cont_dos_itens];
					qntd_revista++;
					soma_idade_revista += ano_publicacao[cont_dos_itens];
				}
				
				//Descobrir os DADOS do mais barato e do mais caro
				if(preco_item[cont_dos_itens] < preco_mais_barato){
					nome_item_barato = nome_item[cont_dos_itens];
					preco_mais_barato = preco_item[cont_dos_itens];
					ano_item_barato = ano_publicacao[cont_dos_itens];
					tipo_item_barato = tipo_documento[cont_dos_itens];
				}
				
				if (preco_item[cont_dos_itens] > preco_mais_caro){
					nome_item_caro = nome_item[cont_dos_itens];
					preco_mais_caro = preco_item[cont_dos_itens];
					ano_item_caro = ano_publicacao[cont_dos_itens];
					tipo_item_caro = tipo_documento[cont_dos_itens];
				}	
				
			
			system("cls");
			cont_dos_itens ++;
			
			cout << "\n===================================================================";
			cout << "\n                       - BIBLIOTECA UNIPLAC -                      ";
			cout << "\n===================================================================";
			cout << "\n...Digite o nome do Item -- contagem [" << cont_dos_itens + 1 << "]: ";
			cin.ignore(); // para limpar buffer antes da primeira leitura
			getline(cin, nome_item[cont_dos_itens]);
		}
		
	//Processo e Sa�da
		//a) Calcule e informe a m�dia de valores (pre�os) de todos os livros;
		media_livro = soma_livros / qntd_livros;
		cout << "\n-------------------------------------------------------------------";
		cout << "\n.......A m�dia de pre�o de todos os livros R$: " << media_livro; 
		cout << "\n-------------------------------------------------------------------";
		
		/*b) Verifique se h� algum livro ou revista chamada �Algoritmos para Experts� no acervo,
		caso positivo mande uma mensagem ao usu�rio confirmando a presen�a deste;*/
		for (int i = 0; i < cont_dos_itens; i++) {
    		if (nome_item[i] == "Algoritmos para Experts") {
        		encontrado = true;
        		break;
    		}
		}		

		if (encontrado) {
		cout << "\n...[Ol�, h� presen�a do livro 'Algoritmos para Experts'!]..........";
		cout << "\n-------------------------------------------------------------------";
		} else {
	    cout << "\n...................[N�o h� algoritmos para experts]................";
	    cout << "\n-------------------------------------------------------------------";
		} // eu tentei de tudo :(

		/*c) Calcule a m�dia de idade dos livros e das revistas, e informe qual tipo de documento
		possui a maior m�dia de idade;*/
		media_idade_livros = soma_idade_livros / qntd_livros;
		media_idade_revista = soma_idade_revista / qntd_revista;
		
		if(media_idade_livros > media_idade_revista){
			cout << "\n............[Os Livros Possuem a maior m�dia de Idade.]............";
			cout << "\n-------------------------------------------------------------------";
		} else if (media_idade_revista > media_idade_livros){
			cout << "\n............[As Revistas Possuem a maior m�dia de Idade.]..........";
			cout << "\n-------------------------------------------------------------------";	
		}
		
		//d) Verifique e apresente todos os dados do item mais caro e do item mais barato;
			cout << "\n....................[DADOS DO ITEM MAIS CARO]......................";
			cout << "\n...[NOME DO ITEM: "  << nome_item_caro << " ]......................";
			cout << "\n...[ANO DE PUBLICA��O: " << ano_item_caro << " ]...................";
			cout << "\n...[TIPO DE DOCUMENTO: " << tipo_item_caro << " ]..................";
			cout << "\n...[PRE�O DO ITEM R$: "  << preco_mais_caro << " ].................";
			cout << "\n-------------------------------------------------------------------";
			
			cout << "\n....................[DADOS DO ITEM MAIS BARATO]....................";
			cout << "\n...[NOME DO ITEM: "  << nome_item_barato << " ]....................";
			cout << "\n...[ANO DE PUBLICA��O: " << ano_item_barato << " ].................";
			cout << "\n...[TIPO DE DOCUMENTO: " << tipo_item_barato << " ]................";
			cout << "\n...[PRE�O DO ITEM R$: "  << preco_mais_barato << " ]...............";
			cout << "\n-------------------------------------------------------------------";
		
		/*e) Informe o nome e o valor do item mais recente de todo o acervo, e se este � livro ou
		revista.*/
		
			for (int i=0; i < cont_dos_itens; i++){
				if(ano_publicacao[i] > ano_recente){
					ano_recente = ano_publicacao[i];
					nome_item_recente = nome_item[i];
					tipo_item_recente = tipo_documento[i];
					preco_item_recente = preco_item[i];
				}
			}
			cout << "\n...................[DADOS DO ITEM MAIS RECENTE]....................";
			cout << "\n...[NOME DO ITEM: "  << nome_item_recente << " ]...................";
			cout << "\n...[ANO DE PUBLICA��O: " << ano_recente << " ].....................";
			cout << "\n...[TIPO DE DOCUMENTO: " << tipo_item_recente << " ]...............";
			cout << "\n...[PRE�O DO ITEM R$: "  << preco_item_recente << " ]..............";
			cout << "\n-------------------------------------------------------------------";
	
	//T�lioThau�Dutra :D
}
