#include<iostream> // usar o cout e o cin
using namespace std;// para usar o cout e o cin

float calcular(float num1, float num2, char caracter); 

float num1,num2,resultado;
char caracter;

main()
{
  system("chcp 65001");
  cout<<"\n Programa Continhas - Versão 01  \n";
  cout<<"\n Informe um valor  \n";
  cin>>num1;
  cout<<"\n Informe outro valor  \n";
  cin>>num2;
  cout<<"\n Informe um sinal para calcular [+] [-] [*]  \n";
  cin>>caracter;
  resultado = calcular(num1,num2,caracter);
  cout<<" \n O Resultado da Operação ";
  //Agora é para ficar bonitinho na tela
  cout<<num1 <<"  "<<caracter<<" "<<num2<<"  =  "<<resultado;
  cout<<"\n\n\n\n\n";	
}//Fim do main()
//=================================
//FUNÇÕES
//=================================
// Função Calcular Complicado 
float calcular(float num1, float num2, char caracter)
{
  if (caracter =='+')
       return (num1+num2);
  if (caracter =='-')
       return (num1-num2);
  if (caracter =='*')
       return (num1*num2);  
}
