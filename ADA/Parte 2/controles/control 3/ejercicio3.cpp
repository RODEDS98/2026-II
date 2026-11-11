// ejercicio 3
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int tiempo_minimo(vector<int>& tiempos, int n) {
    sort(tiempos.begin(), tiempos.end());
    int sum = 0;
    int i = 1;
    while (i < n) {
        sum = sum + tiempos[i];
        i++;
    }
    return 1 + sum;
}

int main()
{
   
    vector<int> tiempos{ 8,3,5,2 };
    int n = 4;
    cout << "tiempo minimo = " << tiempo_minimo(tiempos,n) << endl;
    return 0;
}
