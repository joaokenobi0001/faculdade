#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "portuguese");
    int num;
    cout<<"insira um numero";
    cin>> num;
    
    if (num > 0)
         cout << "o numero � positivo";
    else if (num < 0)
        cout << "o numero � negativo";
    else
        cout << "Zero";
    
    return 0;
}
