#include <iostream>
using namespace std;

void exibeSequencia() {

    for(int i = 0; i < 6; i++) {
        if (i > 0) {
            cout << endl;
        }
        for(int j = 0; j < i; j++) {
            cout << i;
        }
    }
}

int main() {
    exibeSequencia();
    return 0;
}