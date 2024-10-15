#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i, n, dado, maior_valor = 0;
    vector<int> dados;

    cout << "\n";
    cout << ">> Inicio: Prova P1\n\n";

    cout << "Quantos dados deseja inserir? ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Insira o valor " << i + 1 << ": ";
        cin >> dado;

        if (dado > maior_valor) {
            maior_valor = dado;
        }

        dados.push_back(dado);        
    }

    cout << "\nDados: [";
    for (i = 0; i < n; ++i) {
        cout << dados[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    cout << "\n\n* Total de linhas: " << dados.size();
    cout << "\n* Total de colunas: " << maior_valor << endl;

    cout << "\nHistograma Horizontal\n\n";

    for (i = 0; i < n; ++i) {
        cout << i + 1 << "| ";

        for (int j = 0; j < dados[i]; ++j) {
            cout << "* ";  
        }
        cout << endl;
    }

    cout << " +";
    for (i = 0; i < maior_valor; ++i) {
        cout << " -";  
    }
    cout << endl;

    for (i = 0; i <= maior_valor; ++i) {
        cout << " " << i;  
    }
    cout << "\n\n";

    cout << ">>Fim: Prova P1";

    return 0;
}
