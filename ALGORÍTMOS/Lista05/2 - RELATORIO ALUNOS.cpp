#include <iostream>
using namespace std;

main()
{
    system("chcp 65001"); // Para console UTF-8 no Windows
    setlocale(LC_ALL, "Portuguese");

    string nomes[100]={""}, aluno_velho, aluno_novo, melhor_aluno, sexos[100];
    float notas[100], melhor_nota = -1, nota_homem = 0, nota_mulher = 0, sexo_da_media=0;
    int idades[100], idade_velha = -1, idade_nova = 200, cont = 0;
    int soma_idade = 0, media_homem = 0, media_mulher = 0, faixa = 0;
    string melhor_media = "", sexo_melhor = "";
    bool ze = false;
    int cont_homem = 0, cont_mulher = 0; // contadores para m�dia

    cout << "===================================================";
    cout << "\n               - RELAT�RIO UNIPLAC -          "     ;
    cout << "\n===================================================";
    cout << "\n      //Para finalizar digite 'fim' (no nome)";
    cout << "\n===================================================";
    cout << "\n...Digite o nome do aluno [" << cont + 1 << "]: ";
    cin >> nomes[cont];

    while(nomes[cont] != "fim"){

        // Ler idade
        do {
            cout << "...Digite a idade do aluno [" << cont + 1 << "]: ";
            cin >> idades[cont];

            if(cin.fail()) {
                cin.clear(); 
                cin.ignore(1000, '\n'); 
                idades[cont] = -1; 
                cout << "...[Entrada Inv�lida!]\n";
            }

            if(idades[cont] <= 0 || idades[cont] > 150){
                cout << "...[Valor Inv�lido!]\n";    
            }

        } while(idades[cont] <= 0 || idades[cont] > 150);

        // Ler Sexo
        do {
            cout << "...Digite o sexo (M/F) do aluno [" << cont + 1 << "]: ";
            cin >> sexos[cont];

            if (!(sexos[cont] == "M" || sexos[cont] == "m" || sexos[cont] == "F" || sexos[cont] == "f")){
                cout << "...[Valor Inv�lido!]\n";
            }

        } while (!(sexos[cont] == "M" || sexos[cont] == "m" || sexos[cont] == "F" || sexos[cont] == "f"));

        // Ler Nota
        do {
            cout << "...Digite a nota do aluno (0-10) [" << cont + 1 << "]: ";
            cin >> notas[cont];

            if(cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "...[Entrada Inv�lida!]\n";
            }

            if(notas[cont] < 0 || notas[cont] > 10){
                cout << "...[Valor Inv�lido!]\n";
            }

        } while (notas[cont] < 0 || notas[cont] > 10);

        // Faixa et�ria (soma para m�dia)
        soma_idade += idades[cont];

        // Verificar Z�
        if (nomes[cont] == "z�" || nomes[cont] == "Z�" || nomes[cont] == "Z�") {
            ze = true;
        }

        // Aluno mais velho
        if (idades[cont] > idade_velha) {
            idade_velha = idades[cont];
            aluno_velho = nomes[cont];
        }

        // Aluno mais novo
        if (idades[cont] < idade_nova) {
            idade_nova = idades[cont];
            aluno_novo = nomes[cont];
        }

        // Melhor aluno
        if (notas[cont] > melhor_nota) {
            melhor_nota = notas[cont];
            melhor_aluno = nomes[cont];
            sexo_melhor = sexos[cont];
        }

        // Soma M�dia e contagem
        if (sexos[cont] == "M" || sexos[cont] == "m") {
            nota_homem += notas[cont];
            cont_homem++;
        } else if (sexos[cont] == "F" || sexos[cont] == "f") {
            nota_mulher += notas[cont];
            cont_mulher++;
        }

        cont++;

        system("cls");

        cout << "===================================================";
        cout << "\n               - RELAT�RIO UNIPLAC -"     ;
        cout << "\n===================================================";
        cout << "\n      //Para finalizar digite 'fim' (no nome)";
        cout << "\n===================================================";
        cout << "\n...Digite o nome do aluno [" << cont + 1 << "]: ";
        cin >> nomes[cont];
    }

    // Calcular m�dias por sexo
    media_homem = (cont_homem > 0) ? (nota_homem / cont_homem) : 0;
    media_mulher = (cont_mulher > 0) ? (nota_mulher / cont_mulher) : 0;
    faixa = idade_velha - idade_nova; // faixa et�ria como intervalo

    // Melhor sexo por m�dia
    if (media_homem > media_mulher){
        melhor_media = "O Sexo com a melhor m�dia � o Masculino.";
        sexo_da_media = media_homem;
    } else if (media_mulher > media_homem){
        melhor_media = "O Sexo com a melhor m�dia � o Feminino.";
        sexo_da_media = media_mulher;
    } else {
        melhor_media = "As m�dias dos sexos s�o iguais.";
        sexo_da_media = media_homem; // ou media_mulher
    }

    // Sexo do Melhor aluno formatado
    if (sexo_melhor == "m" || sexo_melhor == "M"){
        sexo_melhor = "Masculino.";
    } else if (sexo_melhor == "F" || sexo_melhor == "f"){
        sexo_melhor = "Feminino.";
    } else {
        sexo_melhor = "Indefinido.";
    }

    // Sa�da
    cout << "\nA) Faixa Et�ria da turma: " << faixa << " anos.";
    if (ze){
        cout << "\nB) Salve Z�, UM ABRA�O!!!";  // acento deve aparecer
    } else {
        cout << "\nB) Cad� o Z�, m� gente boa.";
    }
    cout << "\nC) " << melhor_media << " M�dia: " << sexo_da_media;
    cout << "\nD) Aluno mais velho: " << aluno_velho << " e o aluno mais novo: " << aluno_novo;
    cout << "\nE) Melhor Aluno: " << melhor_aluno << " | Nota: " << melhor_nota << " | Sexo: " << sexo_melhor;

}
