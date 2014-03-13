#include <iostream.h>

using namespace std;

struct Passagens{
       char origem [30];
       char data [8] ;
       char destino [30];
       char horario [30];
       int poltrona;
};
main(){
       int n=0;
       int resultado;
         
       do {
          system("cls");
          cout << "Digite o numero de passagens";
          cin >> n;                  
          }
          while (n > 2);
          Passagens passagem [n];
          
       for (int i=0; i < n; i++){
           fflush(stdin);
           cout << "Digite a origem:\n";
           gets (passagem[i].origem);
           cout << "Digite a data:\n ";
           gets (passagem[i].data);
           cout << "Digite seu destino:\n";
           gets (passagem[i].destino);
           cout << "Digite sua poltrona:\n";
           cin  >> passagem[i].poltrona;
           system("cls");
           }
       
       resultado=n;
       
       cout<<"total de pessoas que irao viajar\n"<< n;
       
system("pause");

}
