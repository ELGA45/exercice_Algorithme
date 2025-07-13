#include <iostream>
#include <cmath>

using namespace std;

bool estPremier(int nombre) {
    if (nombre <= 1) return false;
    if (nombre == 2) return true;
    if (nombre % 2 == 0) return false;

    for (int i = 3; i <= sqrt(nombre); i += 2) {
        if (nombre % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, nombre, comptePremiers = 0;

    cout << "Combien de nombres souhaitez-vous entrer ? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Entrez le nombre #" << i + 1 << ": ";
        cin >> nombre;

        if (estPremier(nombre)) {
            comptePremiers++;
        }
    }

    cout << "Il y a " << comptePremiers << " nombre(s) premier(s) parmi les nombres saisis." << endl;

    return 0;
}
