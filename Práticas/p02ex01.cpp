#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int temp[12], maiortemp=0, menortemp=0, imaiort, imenort;
    for (int i=0;i<12;i++){
        cout << " Digite o a temperatura no mes " << i << " :  " ;
        cin >> temp[i];
        if ( temp[i] > maiortemp){
             maiortemp = temp[i];
             imaiort = i;
        }
        if ( temp[i]< menortemp || menortemp == 0){
             menortemp = temp[i];
             imenort = i;
        }
    }
    switch (imaiort) {
      case 0 : cout << "O maior temp eh" << maiortemp << " do mes de Janeiro "<<endl ;
               break;
      case 1 : cout << "O maior temp eh" << maiortemp << " do mes de Fevereiro "<<endl ;
               break;
      case 2 : cout << "O maior temp eh" << maiortemp << " do mes de Marco "<<endl ;
               break;
      case 3 : cout << "O maior temp eh" << maiortemp << " do mes de Abril "<<endl ;
               break;
      case 4 : cout << "O maior temp eh" << maiortemp << " do mes de Maio "<<endl ;
               break;
      case 5 : cout << "O maior temp eh" << maiortemp << " do mes de Junho "<<endl ;
               break;
      case 6 : cout << "O maior temp eh" << maiortemp << " do mes de Julho "<<endl ;
               break;
      case 7 : cout << "O maior temp eh" << maiortemp << " do mes de Agosto "<<endl ;
               break;
      case 8 : cout << "O maior temp eh" << maiortemp << " do mes de Setembro "<<endl ;
               break;
      case 9 : cout << "O maior temp eh" << maiortemp << " do mes de Outubro "<<endl ;
               break;
      case 10 : cout << "O maior temp eh" << maiortemp << " do mes de NOvembro "<<endl ;
               break;
      case 11 : cout << "O maior temp eh" << maiortemp << " do mes de Dezembro "<<endl ;
               break;    
               }
      switch (imenort) {
      case 0 : cout << "O menor temp eh" << menortemp << " do mes de Janeiro "<<endl ;
               break;
      case 1 : cout << "O menor temp eh" << menortemp << " do mes de Fevereiro "<<endl ;
               break;
      case 2 : cout << "O menor temp eh" << menortemp << " do mes de Marco "<<endl ;
               break;
      case 3 : cout << "O menor temp eh" << menortemp << " do mes de Abril "<<endl ;
               break;
      case 4 : cout << "O menor temp eh" << menortemp << " do mes de Maio "<<endl ;
               break;
      case 5 : cout << "O menor temp eh" << menortemp << " do mes de Junho "<<endl ;
               break;
      case 6 : cout << "O menor temp eh" << menortemp << " do mes de Julho "<<endl ;
               break;
      case 7 : cout << "O menor temp eh" << menortemp << " do mes de Agosto "<<endl ;
               break;
      case 8 : cout << "O menor temp eh" << menortemp << " do mes de Setembro "<<endl ;
               break;
      case 9 : cout << "O menor temp eh" << menortemp << " do mes de Outubro "<<endl ;
               break;
      case 10 : cout << "O menor temp eh" << menortemp << " do mes de NOvembro "<<endl ;
               break;
      case 11 : cout << "O menor temp eh" << menortemp << " do mes de Dezembro "<<endl ;
               break;    
               }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
