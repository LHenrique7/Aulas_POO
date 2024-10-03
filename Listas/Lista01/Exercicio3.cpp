#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float notas[3];
    float total = 0;
    float media;
    int i;

    for(i = 0; i < 4; i++) {
        cout << "Insira a nota " << i + 1 << ": ";
        cin >> notas[i];

        total += notas[i];
    }

    media = total / 4;

    cout << "\nA média do aluno foi " << setprecision(2) << media;

    return 0;
}