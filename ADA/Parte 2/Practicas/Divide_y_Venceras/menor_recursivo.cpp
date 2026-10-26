#include <iostream>
#include <vector>


using namespace std;

int buscarMenor(const vector<int>& a, int izquierda, int derecha) {
    // Caso base
    if (izquierda == derecha) {
        return a[izquierda];
    }    
    // punto medio
    int medio = izquierda + (derecha - izquierda) / 2;
    
    // El menor de cada mitad recursivo
    int menorIzq = buscarMenor(a, izquierda, medio);
    int menorDer = buscarMenor(a, medio + 1, derecha);
    
    // combinacion y resultado
    if(menorIzq < menorDer) return menorIzq;
    return  menorDer;
}

int main() {

    vector<int> v1 = {18, 7, 25, 3, 14, 9, 11, 5};
    cout << "1. Vector desordenado: " << buscarMenor(v1, 0, v1.size() - 1) << endl;

    vector<int> v2 = {3, 5, 7, 9, 11, 14, 18, 25};
    cout << "2. Vector ya ordenado: " << buscarMenor(v2, 0, v2.size() - 1) << endl;

    vector<int> v3 = {25, 18, 14, 11, 9, 7, 5, 3};
    cout << "3. Vector descendente: " << buscarMenor(v3, 0, v3.size() - 1) << endl;

    vector<int> v4 = {7, 3, 9, 3, 14, 7, 11, 5};
    cout << "4. Vector con repetidos: " << buscarMenor(v4, 0, v4.size() - 1) << endl;

    vector<int> v5 = {42};
    cout << "5. Vector de un solo elemento: " << buscarMenor(v5, 0, v5.size() - 1) << endl;

    return 0;
}
