
#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello World"<<endl;

    int N = 16; 
    int C1 = 0; int C2 = 0; int C3 = 0; int C4 = 0; int C5 = 0; int C6 = 0;   
  

    for(int i=1 ;(C1++,i<=N)  ; i++ ){           
        int j=N;                                 C2++;
        while( C3++, 1<= j && j <=N ){                
           
            if(j%2 ==0){                         C4++;
              
                cout<< " j: " << j <<endl;       C5++;
            }    
            j = j/2;                             C6++; 
        }
    }

    
    
    cout<<" C1: " << C1 <<endl;
     cout<<" C2: " << C2 <<endl;
      cout<<" C3: " << C3 <<endl;
       cout<<" C4: " << C4 <<endl;
        cout<<" C5: " << C5 <<endl;
         cout<<" C6: " << C6 <<endl;
         
    return 0;
}

