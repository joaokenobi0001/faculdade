#include <iostream>
using namespace std;
main()
{
   int num1 = 5;
   int num2 = 10;
   int num3 = 6;
   int num4 = 5;
   
   if ((num1 >= num4 || num1 < num3) && (num2<num3 || num4 > num2))
     cout<< "\n ENTENDI TUDO !!! \n";
   else
     cout<<"\n\n NAO ENTENDI NADA \n";
 }
