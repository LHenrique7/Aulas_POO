//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Exemplo 09: Exemplo de um array de ponteiros para fun��es
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;


//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Prot�tipo das fun��es
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void cantar(int);
void dancar(int);
void enrolar(int);

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Fun��o Principal
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Array de Ponteiros para Fun��es\n\n";

    //Declara e inicializa um array de 3 ponteiros para fun��es, que
    //aceitam um argumento inteiro e n�o retornam nenhum valor
    void(**funcoes[3])(int) = {
        cantar,
        dancar,
        enrolar
    };

    //Controla a op��o do usu�rio
    int opcao;

    //Recebe a entrada do usu�rio
    cout << ">> Informe a op��o desejada (0, 1 ou 2): ";
    cin >> opcao;
    cout << endl;

    //Loop para processar a escolha do usu�rio
    while(opcao >= 0) && (opcao < 3)) {

        //Executa a fun��o de acordo com a op��o escolhida,
        //passando o valor da op��o como argumento
        (*funcoes[opcao])(opcao);

        //Recebe a entrada do usu�rio novamente
        cout << ">> Informe a op��o desejada (0, 1, 2 ou 3 para sair): ";
        cin >> opcao;
        cout << endl;

    }

    return 0;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Defini��o das Fun��es
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Fun��o cantar()
void cantar(int opcao) {
    cout << "*Voc� escolheu a op��o " << opcao << ". Vamos cantar!\n\n";
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Fun��o dan�ar()
void dancar(int opcao) {
    cout << "*Voc� escolheu a op��o " << opcao << ". Vamos dan�ar!\n\n";
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Fun��o enrolar()
void enrolar(int opcao) {
    cout << "* Voc� escolheu a op��o " << opcao << ". Vamos enrolar!\n\n";
}