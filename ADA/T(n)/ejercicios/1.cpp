
#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello World"<<endl;

    int N = 10; int r = 0; 
    int C1 = 0; int C2 = 0; int C3 = 0; int C4 = 0; int C5 = 0; int C6 = 0;   
  

    int k=0;                             C1++;
    for(int j=1 ;(C2++,j<=N)  ; j++ ){           ;
        k = k+j;                         C3++;
        for( int i=1 ; (C4++,i<=N) ; i++){       
            r = k+i;                     C5++; 
        }
    }
    int z= k+r;                          C6++; 
    
    
    cout<<" C1: " << C1 <<endl;
     cout<<" C2: " << C2 <<endl;
      cout<<" C3: " << C3 <<endl;
       cout<<" C4: " << C4 <<endl;
        cout<<" C5: " << C5 <<endl;
         cout<<" C6: " << C6 <<endl;
         
    return 0;
}

