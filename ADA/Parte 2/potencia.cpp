


#include <iostream>
using namespace std;
int potencia(int b, int n){
    if (n<0) return 1;
    return b * potencia(b,n-1); 
}


int main()
{
    int b = 3;
    int n = 4;
    int res = potencia(b,n);
    cout<< " res = " << res<<endl;
    return 0;
}
