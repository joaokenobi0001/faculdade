#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "portuguese");
    int num;
    cout<<"insira um numero";
    cin>> num;
    if (num%2==0)
	cout<<"\n " << num<< " � Par";
	else
	cout<<"\n " << num<< " � �mpar";
	
}
