#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int>& A) {
    int n = A.size();
    for (int j = 1; j < n; j++) {
        int key = A[j];
        //std::cout << A[j]<<" ," ;
        int i = j - 1;
        
        // Desplaza los elementos mayores a la derecha
        while (i >= 0 && A[i] > key) {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }
}

int main() {
    vector<int> A = {8, 2, 4, 9, 3, 6};

    cout << "Input:  ";
    for (int num : A) cout << num << " ";
    cout << "\n";

    insertionSort(A);

    cout << "Output: ";
    for (int num : A) cout << num << " ";
    cout << "\n";

    return 0;
}
