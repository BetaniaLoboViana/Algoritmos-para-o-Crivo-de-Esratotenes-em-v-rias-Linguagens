#include <iostream>
#include <vector>
using namespace std;

void crivo(int n) {
    vector<bool> Primo(n + 1, true); // Inicialmente, todos os números são primos
    Primo[0] = Primo[1] = false; // 0 e 1 não são primos

    for (int p = 2; p * p <= n; p++) {
        if (Primo[p]) {
            for (int i = p * p; i <= n; i += p) {
                Primo[i] = false; // Marcando múltiplos de p como não primos
            }
        }
    }

    // Exibindo números primos
    for (int i = 2; i <= n; i++) {
        if (Primo[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Digite o valor de n: ";
    cin >> n; // Entrada do valor n
    cout << "Números primos até " << n << ":\n";
    crivo(n);
    return 0;
}
