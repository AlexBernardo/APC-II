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


struct Vendedor
    {
       char nome [30];
       char codigo[8] ;
       float tvendas;
       float salario;
       float bonificacao;
    };
    
main(){
       int n=0, i;
         
       do 
       {
          system("cls");
          cout << "Digite o total de vendedores";
          cin >> n;                  
       }
       while ((n < 1) || (n > 50));
       
       Vendedor Vendedores [n];
          
       for (i=0; i < n; i++){
       fflush(stdin);
           
           cout << "Digite seu nome";
           gets (Vendedores[i].nome);
           
           cout << "Digite o codigo";
           gets (Vendedores[i].codigo);
           
           cout << "Digite o total de vendas no mes";
           cin >> Vendedores[i].tvendas;
           
           cout << "Digite o salario:\n";
           cin >> Vendedores[i].salario;
           
           system("cls");
        }
      
      for(i=0;i<n;i++)
      {
                 
        if((Vendedores[i].tvendas >= 500) && (Vendedores[i].tvendas <= 1000))
        {
         Vendedores[i].bonificacao = (Vendedores[i].salario * 5) / 100;
        }
        else
        if (((Vendedores[i].tvendas > 1000) && (Vendedores[i].tvendas <= 1500)))
        {
        Vendedores[i].bonificacao = (Vendedores[i].salario * 10) / 100;
        }
        else
        {
        Vendedores[i].bonificacao = (Vendedores[i].salario * 15) / 100;
        }
        
       };
       
       
       for(i=0;i<n;i++)
       {
         cout<<"Bonifica��o do vendedor "<<i<<" :"<<Vendedores[i].bonificacao;     
    
    
 }    
system("pause");

}
