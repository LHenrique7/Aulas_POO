#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    double preco, total, dinheiro, troco;
    int qtd = 1;

    while (true) {
        total = 0.0;
        vector<double> precos;

        cout << "--- Armazém Paraíba ---\n\n";
        while (true) {
            cout << "+ Produto " << qtd << ": R$ ";
            cin >> preco;

            if (preco == 0.0) {
                break;
            }
            precos.push_back(preco);

            system("cls");

            cout << "--- Armazém Paraíba ---\n\n";
            for (int i = 0; i < precos.size(); i++) {
                cout << "+ Produto " << (i + 1) << ": R$ "
                     << right << setw(6) << fixed << setprecision(2) << precos[i] << endl;
            }

            qtd++;
        }

        for (double p : precos) {
            total += p;
        }

        cout << fixed << setprecision(2);
        cout << "=  Total...: R$ " << right << setw(6) << total << endl;

        cout << "=> Dinheiro: R$ ";
        cin >> dinheiro;

        troco = dinheiro - total;
        cout << "-  Troco...: R$ " << right << setw(6) << troco << endl;


        cout << "\n--- Próxima compra ---\n" << endl;
        qtd = 1;
    }

    return 0;
}
