#include <iostream>
using namespace std;
 
int main() {
    int r, a;
    cout << "coloque o raio  : ";
    cin >> r;
    cout << "coloque a altura : ";
    cin >> a;
     
    float volume = 3.14159 * r * r * a ;
    cout << "resultado: " << volume << endl;
}
