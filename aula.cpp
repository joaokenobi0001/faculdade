#include<iostream>
#include<ctype.h>
using namespace std;
char letra;
  main()
{
	cout<<"\n PROGRAMA DE TESTE DE CARATERE E SABER SE É VOGAL";
	cout<<"\n digite um caractere";
	cin>>letra;
	letra==toupper (letra);
	if ((letra=='A')||(letra =='E')||(letra=='I')||(letra =='O')||(letra =='U'))
	    { cout<<"\n VC DIGITOU UMA VOGAL";
		}
	else
	    { cout<<'\n DIGITOU OUTRA  COISA SEU ANALFABETO!';
		}
}
	      
	  
	
	

