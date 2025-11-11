#include <iostream>
using namespace std;

int main() {
    float temperatur;
    int z1, z2, z3, z4;
    cout << "Temperatur: " << endl;
    cin >> temperatur;
    cout << "Umrechnung von: " << "\n";
    cout << "Celsius     " << "    Kelvin" << endl;
    cin >> z1;
    cin >> z2;

    cout << "Nach: " << "\n";
    cout << "Celsius     " << "    Kelvin" << endl;
    cin >> z3;
    cin >> z4;

    float ergebnis = z1 * z4 * (temperatur + 273.15) + z2 * z3 * (temperatur - 273.15) + z1 * z3 * temperatur + z2 * z4 * temperatur;
    cout << "Die umgerechnete Temperatur beträgt: " << ergebnis << endl;

    return 0;
}