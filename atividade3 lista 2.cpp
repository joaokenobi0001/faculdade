#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "portuguese");
    int ano;
    cout<<"insira um ano";
    cin>> ano;
    int result = ano / 4 ;
   
    if (ano%4==0)
	cout<<"\n " << ano<< " é bissexto";
	else
	cout<<"\n " << ano<< " não é bissexto";
	
}
