//FUF que receba 3 notas e retorne a média das 3 notas.
#include<iostream> // usar o cout e o cin
using namespace std;// para usar o cout e o cin

float calcularMedia(float nota1, float nota2, float nota3);

float media,nota1,nota2,nota3; 
main()
{
  system("chcp 65001");
  cout<<"\n Programa Médias  \n";
  cout<<"\n Informe a 1ª nota  \n";
  cin>>nota1;
  cout<<"\n Informe a 2ª nota  \n";
  cin>>nota2;
  cout<<"\n Informe a 3ª nota  \n";
  cin>>nota3;
  media = calcularMedia(nota1,nota2,nota3);
  cout<<" \n A média das notas é: "<<media;
  cout<<"\n\n\n\n\n";	
}//Fim do main()
//=================================
//FUNÇÕES
//=================================
// Função Média
float calcularMedia(float nota1, float nota2, float nota3)
{
  return((nota1+nota2+nota3)/3);
   
}

