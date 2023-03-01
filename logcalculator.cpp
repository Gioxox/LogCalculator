#include <iostream>

#include <cmath>

using namespace std;

int main() {
    double x, base, risultato;
    int t;
    char yes;

    do {
        cout << "\tInserire il valore della x" << endl << "=> ";
        cin >> x;

        cout << "\tInserire la base del logaritmo" << endl << "=> ";
        cin >> base;

        risultato = log(x) / log(base);
        
        cout << endl << "Risultato => " << risultato << endl;

        cout << "Vuoi generare un altro numero? [y / n]" << endl;
        cin >> yes;

    } while (yes == 'y');
    

    return 0;
}