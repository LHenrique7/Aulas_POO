#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    float hora;
    string mes;
    int dias;

    cout << "Informe o quanto você ganha por hora: ";
    cin >> hora;

    cout << "Qual o nome do mês atual? ";
    cin >> mes;
    transform(mes.begin(), mes.end(), mes.begin(), ::tolower);

    if(mes == "fevereiro")



    return 0;
}