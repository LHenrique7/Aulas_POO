#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Digite um n�mero inteiro: ";
    cin >> num;
    cout << "\nTabuada do " << num << ":\n\n";

    for(int i = 1; i <= 10; i++) {
        cout << num << " X " << i << " = " << num * i << endl;
    }
}
