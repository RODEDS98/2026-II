#include <iostream>
#include <vector>
#include <algorithm>
// a. Algoritmo para maximizar el NÚMERO de contenedores cargados[cite: 3]
void maximizarContenedores(int k, std::vector<int> pesos) {
    std::sort( pesos.begin() , pesos.end() );
    int sum =0;
    int contenedores =0;
    for (int i: pesos){
        if( sum + i <= k) {
            sum +=i;
            contenedores++;
        }
        else break;
    }
    
    
    std::cout << "Estrategia B (Max Toneladas): Se cargaron " 
              << contenedores << " contenedores. Peso total: " 
              << sum << "/" << k << " toneladas.\n";

}


// b. Algoritmo que intenta maximizar el número de TONELADAS cargadas[cite: 3]
void maximizarToneladas(int k, std::vector<int> pesos) {
    
    std::sort( pesos.rbegin() , pesos.rend() );
    int sum =0;
    int contenedores =0;
    for (int i: pesos){
        if( sum + i <= k) {
            sum +=i;
            contenedores++;
        }
        else break;
    }
    
    
    std::cout << "Estrategia B (Max Toneladas): Se cargaron " 
              << contenedores << " contenedores. Peso total: " 
              << sum << "/" << k << " toneladas.\n";
}

int main() {
    // Capacidad del buque mercante (k toneladas)[cite: 3]
    int k = 100;
    
    // Conjunto de pesos de los contenedores (p1, ..., pn)[cite: 3]
    std::vector<int> pesos = {10, 50, 40, 30, 20, 15, 5};
    
    std::cout << "Capacidad del buque: " << k << " toneladas\n";
    std::cout << "-------------------------------------------\n";
    
    maximizarContenedores(k, pesos);
    maximizarToneladas(k, pesos);

    return 0;
}
