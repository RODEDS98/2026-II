#include <iostream>
#include <vector>
using namespace std;

int C1 = 0, C2 = 0,C3 = 0,C4 = 0,C5 = 0,C6 = 0,C7 = 0,C8 = 0;
void insertionSort(vector<int>& A) { 
    int n = A.size();                      C1++;
    for (int j = 1; j < n; j++,C2++) {   
        
        int key = A[j];                    C3++;
        //std::cout << A[j]<<" ," ;
        int i = j - 1;                     C4++;
        
        // Desplaza los elementos mayores a la derecha
        while ( C5++ ,i >= 0 && A[i] > key ) {     
            A[i + 1] = A[i];               C6++;
            i = i - 1;                     C7++;
        }
        A[i + 1] = key;                    C8++;
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

    cout << "Cx: ";
    cout <<"C1: "<< C1<<endl;
    cout <<"C2: "<< C2<<endl;
    cout <<"C3: "<< C3<<endl;
    cout <<"C4: "<< C4<<endl;
    cout <<"C5: "<< C5<<endl;
    cout <<"C6: "<< C6<<endl;
    cout <<"C7: "<< C7<<endl;
    cout <<"C8: "<< C8<<endl;
    
        
    return 0;
}
