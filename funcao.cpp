//FUF que receba 3 notas e retorne a m�dia das 3 notas.
#include<iostream> // usar o cout e o cin
using namespace std;// para usar o cout e o cin

float calcularMedia(float nota1, float nota2, float nota3);

float media,nota1,nota2,nota3; 
main()
{
  system("chcp 65001");
  cout<<"\n Programa M�dias  \n";
  cout<<"\n Informe a 1� nota  \n";
  cin>>nota1;
  cout<<"\n Informe a 2� nota  \n";
  cin>>nota2;
  cout<<"\n Informe a 3� nota  \n";
  cin>>nota3;
  media = calcularMedia(nota1,nota2,nota3);
  cout<<" \n A m�dia das notas �: "<<media;
  cout<<"\n\n\n\n\n";	
}//Fim do main()
//=================================
//FUN��ES
//=================================
// Fun��o M�dia
float calcularMedia(float nota1, float nota2, float nota3)
{
  return((nota1+nota2+nota3)/3);
   
}

