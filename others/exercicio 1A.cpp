#include <iostream.h>

using namespace std;

/* B.	Numa loja de eletrodom�sticos os vendedores ganham uma bonifica��o no sal�rio de acordo com suas vendas. 
Cada vendedor deve ser representado por nome, c�digo, total de vendas no m�s, sal�rio e bonifica��o. 
Fa�a um programa que calcule e escreva a bonifica��o dos N vendedores dessa loja de acordo com a tabela abaixo:
Vendas	Valor da Bonifica��o
de R$500,00 a R$1.000,00	5% do sal�rio
de R$1.000,00 a R$1.500,00	10% do sal�rio
de R$1.500,00 acima	15% do sal�rio

N deve ser fornecido pelo usu�rio e ser no m�ximo 50.
*/


struct ttvendas{
       char nome [30];
       char codigo[8] ;
       char tvendas[10];
       char salario [10];
       char bonificacao[30];
};
main(){
       int n=0;
       char bonificacao1,bonifica��o2,bonifica��o3;
         
       do {
          system("cls");
          cout << "Digite o total de vendedores";
          cin >> n;                  
          }
          while (n > 2);
          ttvendas vendas [n];
          
       for (int i=0; i < n; i++){
           fflush(stdin);
           
           cout << "Digite seu nome";
           gets (vendas[i].nome);
           
           cout << "Digite o codigo";
           gets (vendas[i].codigo);
           
           cout << "Digite o total de vendas no mes";
           gets (vendas[i].tvendas);
           
           cout << "Digite a bonifica��o:\n";
           gets (vendas[i].bonificacao);
           
           system("cls");
        }
      
      for(int i=0;i<n;i++){
                 
        if(bonificacao >500 && 1000){
           bonificacao1=bonificacao %5/n;
        }
        
        if(bonificacao > 1000 && 1500){
            bonificacao2=bonificacao %10/n;
        } 
        if(bonificacao>1500){
        bonificacao3=bonificacao %15/n; 
        }
   
    cout<<"bonifica��o de 500 a 1000"<<bonifica��o1;
    cout<<"bonifica��o de 1000 a 1500"<<bonifica��o2;
    cout<<"bonifica��o acima de 1500"<<bonifica��o3;

}    
system("pause");

}
