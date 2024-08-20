#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    const float precoAlcool = 3.78;
    const float precoGasolina = 5.70;
    float precoSemDesconto, precoFinal, desconto;
    int litros;
    char tipo;

    cout << "\n";
    cout << "Informe a quantidade de litros de combustivel: "; cin >> litros;
    cout << "Informe o tipo de combustivel (G para Gasolina/A para Alcool): "; cin >> tipo;
    cout << "\n";

    if(litros > 0 && litros <= 20){
        if(tipo == 'A' || tipo == 'a'){
            precoSemDesconto = litros * precoAlcool;
            desconto = precoSemDesconto * 0.03;
            precoFinal = precoSemDesconto - desconto;
        } else if(tipo == 'G' || tipo == 'g') {
            precoSemDesconto = litros * precoGasolina;
            desconto = precoSemDesconto * 0.04;
            precoFinal = precoSemDesconto - desconto;
        }
    } else if(litros > 20) {
        if(tipo == 'A' || tipo == 'a') {
            precoSemDesconto = litros * precoAlcool;
            desconto = precoSemDesconto * 0.05;
            precoFinal = precoSemDesconto - desconto;
        } else if(tipo == 'G' || tipo == 'g') {
            precoSemDesconto = litros * precoGasolina;
            desconto = precoSemDesconto * 0.06;
            precoFinal = precoSemDesconto - desconto;
        }
    }

    cout << "O valor total é R$" << setw(2) << precoFinal;
}

