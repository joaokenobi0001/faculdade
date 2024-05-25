#include <iostream>
 using namespace std;
 int main()
 {
 double fahrenheitToCelsius(double fahrenheit);
 setlocale(LC_ALL, "portuguese");
 	double celsius;
     double fahrenheit;
 
     cout << "entre temperatura fahrenheit (em graus) ";
     cin  >> fahrenheit;
     celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
     cout << "Temperatura em Celsius (em graus) = ";
     cout << celsius << endl;
 if (celsius > 10 && celsius  < 38 )
 {
   cout <<"esta entre 10 e 38 graus";
   }
   
   
 if (celsius > 38)
 {
  cout <<"\n é maior que 38";
 }
 
 
 }
