#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    float veta[5],vetc[5],vetd[5];
    char vetb[5];
    
    for (int i=0;i<5;i++){
        cout << " Digite o vetorA o valor  ";
        cin >> veta[i];
        cout << " Digite o vetorB a operacao  ";
        cin >> vetb[i];
        cout << " Digite o vetorB o valor  ";
        cin >> vetc[i];
    }
    for (int i=0;i<5;i++){
        switch (vetb[i]) {
               case '+' : vetd[i] = veta[i] + vetc[i];
                        break;
               case '-' : vetd[i] = veta[i] - vetc[i];
                        break;
               case '*' : vetd[i] = veta[i] * vetc[i];
                        break;
               case '/' : vetd[i] = veta[i] / vetc[i];
                        break;
                        }
        }
    for( int i=0;i<5;i++){
         cout << veta[i] <<" " <<vetb[i]<<" "<<vetc[i]<< " = " << vetd[i]<< endl;
         }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
