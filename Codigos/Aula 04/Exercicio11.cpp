//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Exemplo 11: exemplo de função
//
//Programa que utiliza funções para implementar uma calculadora simples.
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Variáveis Globais
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

float resultado, N1, N2;

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Protótipos de função
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void entrada();
void saida(string operacao);
void pausa();
void adicao();
void subtracao();
void multiplicacao();
void divisao();

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Função principal
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main() {

    //Declaraçãc das variáveis
    int opcao = 0;

    //Laço para escolha de operação desejada
    while (opcao != 5) {

        //Formatação
        cout << setprecision(2);
        cout << setiosflags(ios::right);
        cout << setiosflags(ios::fixed);

        //Cabeçalho
        cout << "\n";
        cout << "----------------------" << endl;
        cout << " Programa Calculadora " << endl;
        cout << "    Menu Principal    " << endl;
        cout << "----------------------" << endl;
        cout << "\n";

        //Opções de menu
        cout << "[1] - Adição" << endl;
        cout << "[2] - Subtração" << endl;
        cout << "[3] - Multiplicação" << endl;
        cout << "[4] - Divisão" << endl;
        cout << "[5] - Encerrar programa" << endl;
        cout << "\n";

        //Entrada do usuário
        cout << "=> Escolha uma opção: "; cin >> opcao;

        //Se o usuário não deseja encerrar o programa
        if(opcao != 5) {

            //Verifica a opção escolhida pelo usuário
            switch (opcao) {

                //Adição
                case 1:
                    adicao();
                    break;

                //Subtração
                case 2:
                    subtracao();
                    break;

                //Multiplicação
                case 3:
                    multiplicacao();
                    break;

                //Divisão
                case 4:
                    divisao();
                    break;

            }

        }
        //Encerra o programa
        else {
            cout << "\nPrograma encerrado com sucesso!\n\n";
        }

    }
    //Fim do programa
    return 0;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Definição das funções
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Realiza a entrada dos números que serão utilizados para realizar a operação
void entrada() {

    cout << "\n";
    cout << "* Informe o primeiro número: "; cin >> N1;
    cout << "* Informe o segundo número: "; cin >> N2;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Exibe o resultado da operação
void saida(string operacao) {

    cout << "\n";
    cout << "=> O resultado da " << operacao;
    cout << " entre " << N1 << " e " << N2;
    cout << " é " << resultado << "!\n";

    //Simula uma pausa no programa
    pausa();

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Simula uma pausa na execução do programa
void pausa() {

    char letra;

    cout << "\n";
    cout << "Tecle <c> + <Enter> para voltar ao menu: ";

    //Laço para receber a entrada do usuário
    do {

        //Obtém a entrada do usuário
        letra = cin.get();

        //converte para letras maiúsculas
        letra = toupper(letra);

    }while (letra != 'C');

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Realiza a operação de adição
void adicao() {

    //Cabeçalho
    cout << "\n";
    cout << " Rotina de Adição " << endl;
    cout << "------------------" << endl;

    //Executa a função para obter os dados
    entrada();

    //Calcula a adição
    resultado = N1 + N2;

    //Executa a função para exibir o resultado
    saida("adição");

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Realiza a operação de subtração
void subtracao() {

    //Cabeçalho
    cout << "\n";
    cout << " Rotina de Subtração " << endl;
    cout << "---------------------" << endl;

    //Executa a função para obter os dados
    entrada();

    //Calcula a adição
    resultado = N1 - N2;

    //Executa a função para exibir o resultado
    saida("subtração");

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//Realiza a operação de multiplicação
void multiplicacao() {

    //Cabeçalho
    cout << "\n";
    cout << " Rotina de Multiplicação " << endl;
    cout << "-------------------------" << endl;

    //Executa a função para obter os dados
    entrada();

    //Calcula a adição
    resultado = N1 * N2;

    //Executa a função para exibir o resultado
    saida("multiplicação");

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Realiza a operação de divisão
void divisao() {

    //Cabeçalho
    cout << "\n";
    cout << " Rotina de Divisão " << endl;
    cout << "-------------------" << endl;

    //Executa a função para obter os dados
    entrada();

    //verifica se não está ocorrendo uma divisão por zero
    if(N2 == 0) {

        cout << "\n";
        cout << "Erro de divisão\n";

        //Simula uma pausa no programa
        pausa();
    }

    //Caso contrário
    else {

        //Calcula a adição
        resultado = N1 / N2;

        //Executa a função para exibir o resultado
        saida("divisão");

    }

}
