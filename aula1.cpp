#include <iostream>
using namespace std;
 
int main() {
	setlocale(LC_ALL, "portuguese");
    float x;
    float y;
    cout << "primeiro  : ";
    cin >> x;
    cout << "segundo : ";
    cin >> y;
     
    if (x > y) {
        cout << "primeiro numero � maior que segundo." << endl;
    } else {
        cout << "primeiro numero n�o � maior que segundo." << endl;
    }
    
    if (x == y) {
    	cout <<"os dois numeros s�o o mesmo" << endl;
	}
}
