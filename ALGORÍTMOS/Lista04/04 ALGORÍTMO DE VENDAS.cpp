#include <iostream>
using namespace std;
main()
{
	/*Quest�o 04:
		Elabore um algoritmo que leia o nome, o pre�o unit�rio e a quantidade vendida de v�rios
		produtos, que ser�o informados pelo usu�rio. Obs.: como a quantidade de produtos �
		indeterminada, para que o processo de leitura dos dados termine, o usu�rio deve digitar
		�fim� quando for ler a vari�vel que armazena o nome do produto.
		Ao final, o algoritmo dever� apresentar:
		a) O nome e o valor do produto mais barato;
		b) O nome e a quantidade do produto mais vendido;
		c) A m�dia de pre�o dos produtos.*/
	
	//Configura��es
		setlocale(LC_ALL, "Portuguese");
		
	//Vari�veis
		string nome = "", nome_mais_barato="", nome_mais_vendido="", nome_anterior;
		float preco_unitario=0, media=0, soma=0;
		float preco_mais_barato=100000000000000;
		int qntd_vendida=0, qntd_mais_vendida=0;
		
	//Entrada
		cout << "\n===================================";
		cout << "\n      - ALGOR�TMO DE VENDAS - ";
		cout << "\n===================================";
		cout << "\n-----------------------------------";
		cout << "\n  //Para finalizar digite 'fim'. ";
		cout << "\n-----------------------------------";
	
		cout << "\n...Informe o nome do produto: ";
		cin >> nome;
		
		nome_anterior = nome;
		
	//Processo
		while(nome != "fim"){
			
			if (nome != "fim"){
				
				cout << "...Informe o pre�o unit�rio: ";
				cin >> preco_unitario;
				qntd_vendida++;
				
				
				if (nome == nome_anterior){
					nome_mais_vendido = nome;
					qntd_mais_vendida++;
				}
				
				if (preco_unitario < preco_mais_barato){
				preco_mais_barato = preco_unitario;
				nome_mais_barato = nome;
				}
				
				
				
				
				
					soma += preco_unitario;
			}
				
				cout << "\n...Informe o nome do produto: ";
				cin >> nome;
		}
		
			media = soma / qntd_vendida;
		
	//Sa�da
		cout << "\na) O nome do produto mais barato: " << nome_mais_barato;
		cout << "\na) valor do produto mais barato: " << preco_mais_barato;
		cout << "\nb) O nome do produto mais vendido: " << nome_mais_vendido;
		cout << "\nb) quantidade do produto mais vendido: " << qntd_mais_vendida;
		cout << "\nc) A m�dia de pre�o dos produtos: " << media;
		cout << "\n - SOMA: " << soma;
		cout << "\n - QUANTIDADE VENDIDA: " << qntd_vendida;
		
}
